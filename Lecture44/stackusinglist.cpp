#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    Node* index;
    int sizes;


    Stack(){
        index = NULL;
        sizes = 0;
    }
    

    void push(int val){
       Node *temp = new Node(val);
       if(!temp){
         cout<<"Stack Overflow\n";
         return;
       }
       temp->next = index;
       index = temp;
       sizes++;
       cout<<val<<" pushed into stack\n";
    }

    void pop(){
        if(index==NULL){
            cout<<"Stack underflow\n";
        }
        else{
          cout<<index->data<<" popped from the stack\n";  
          Node *temp = index;
          index = index->next;
          delete temp;
          sizes--;
        }
    }

    
    int top(){
        return index->data;
    }

    int size(){
        return sizes;
    }

    bool empty(){
        return sizes==0;
    }
};




int main(){
   
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.top();
}