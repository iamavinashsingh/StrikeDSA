/* struct Node {
    int data;
    struct Node * next;
    struct Node * bottom;
    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
}; */


Node* sortedMerge(Node* head1, Node* head2) {

    Node *Head = NULL, *Tail = NULL;

	if(head1->data<=head2->data){
		Head = Tail = head1;
		head1 = head1->bottom;
	}
	else{
		Head = Tail = head2;
		head2 = head2->bottom;
	}

	while(head1&&head2){
		if(head1->data<=head2->data){
		Tail->bottom = head1;
		head1 = head1->bottom;
		Tail = Tail->bottom;
	   }
	   else{
		Tail->bottom = head2;
		head2 = head2->bottom;
		Tail = Tail->bottom;
	   }
	}

	if(head1){
		Tail->bottom = head1;
	}
	else{
		Tail->bottom = head2;
	}

	return Head;

}



Node* merge(Node** arr, int start, int end){

	if(start==end){
		return arr[start];
	}


	int mid = start+(end-start)/2;

	Node* head1 = merge(arr,start,mid);
	Node* head2 = merge(arr,mid+1,end);

	return sortedMerge(head1,head2);
}



Node* flatten(Node* root) {
    // Your code here
    
	if(!root||!root->next){
		return root;
	}

	

	Node* Head = root, *temp;
    
	int n = 0, i=0;

	while(Head){
		n++;
		Head = Head->next;
	}

	Head = root;
	Node **arr = new Node*[n];

	while(Head){
		temp = Head->next;
		Head->next = NULL;
		arr[i] = Head;
		Head = temp;
		i++;
	}

    return merge(arr,0,n-1);
}