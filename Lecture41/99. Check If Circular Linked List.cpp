/*
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {}
};
*/
bool isCircular(ListNode *head) {

	if(!head){
		return 0;
	}
    
	ListNode* Temp = head->next;

	while(Temp&&Temp!=head){
		Temp = Temp->next;
	}


	if(!Temp){
		return 0;
	}

	return 1;
}