#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    // constructor
    Node(int value){
      data = value;
      next = NULL;
    }
};


int main(){
   
    // Node N1(10,NULL);
 

    // cout<<N1.data<<" ";

    // Node *head = new Node(10,NULL);
    // cout<<head->data<<" ";

    int arr[5] = {10,12,15,20,11};

    Node *Head = NULL, *Tail = NULL;


    // Create first Node
    for(int i=0;i<5;i++){
    if(!Head){
        // first node creation
        Head = new Node(arr[0]);
        Tail = Head;
    }
    else{
    //   other node creation by adding element at last
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
    }
    
    // 10->20->30

    // Traverse the Linked List

    Tail = Head;

    while(Tail!=NULL){
        cout<<Tail->data<<" ";
        Tail = Tail->next;
    }


    return 0;
}