#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev , *next;

    Node(int value){
        data = value;
        prev = next = NULL;
    }
};

class Deque{

    public:
    Node *front, *rear;
    int size;

    Deque(){
        front = rear = NULL;
        size = 0;
    }


    bool isEmpty(){
        return size==0;
    }

    // pushBack
    void pushBack(int val){
        if(isEmpty()){
            front = rear = new Node(val);
            size++;
        }
        else{
            rear->next = new Node(val);
            rear->next->prev = rear;
            rear = rear->next;
            size++;
        }
        cout<<val<<" pushBack into Deque\n";
    }
    // pushFront

    void pushFront(int val){
        if(isEmpty()){
            front = rear = new Node(val);
            size++;
        }
        else{
            // front->prev = new Node(val);
            // front->prev->next= front;
            // front = front->prev;
            Node *first = new Node(val);
            first->next = front;
            front->prev = first;
            front = first;
            size++;
        }
        cout<<val<<" pushFront into Deque\n";
    }

    // popBack
    void popBack(){
        if(isEmpty()){
            cout<<"Deque is Empty\n";
            return;
        }
        else{
            // single element
            if(rear==front){
                cout<<rear->data<<" popped back from deque\n";
                delete rear;
                rear = front = NULL;
                size = 0;
            }
            else{
                cout<<rear->data<<" popped back from deque\n";
                rear = rear->prev;
                delete rear->next;
                rear->next = NULL;
                size--;
            }
        }
    }
    // popFront

    void popFront(){
        if(isEmpty()){
            cout<<"Deque is Empty\n";
            return;
        }
        else{
            // single element
            if(rear==front){
                cout<<rear->data<<" popped Front from deque\n";
                delete rear;
                rear = front = NULL;
                size = 0;
            }
            else{
                cout<<front->data<<" popped Front from deque\n";
                front = front->next;
                delete front->prev;
                front->prev = NULL;
                size--;
            }
        }
    }
    // popFront

   int getFront(){
        if(isEmpty()){
            return -1;
        }

        return front->data;
   }

   int getBack(){
         if(isEmpty()){
            return -1;
        }

        return rear->data;
   }


};


//  80 20 30
int main(){
  
    Deque D;
    D.pushBack(20);
    D.pushBack(30);
    D.pushFront(80);
    D.pushBack(97);
    D.pushFront(11);

    cout<<D.size<<endl;
    cout<<D.getFront()<<endl;
    cout<<D.getBack()<<endl;

    D.popBack();
    D.popFront();
    cout<<D.getFront()<<endl;
    cout<<D.getBack()<<endl;
    D.popBack();
    D.popFront();
    D.popBack();
    D.popFront();
}