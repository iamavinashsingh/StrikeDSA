#include<iostream>
using namespace std;

class Queue{

    public:
    int front,rear,capacity;
    int *arr;

    Queue(int size){
        arr = new int[size];
        capacity = size;
        front = rear = -1;
    };

    bool isEmpty(){
        return rear==-1;
    }

    bool isFull(){
        return rear==capacity-1;
    }

    void push(int x){
        if(isEmpty()){
            front=rear = 0;
            arr[rear] = x;
            cout<<x<<" pushed into queue\n";
            return;
        }
        else if(isFull()){
            cout<<"Queue is Full\n";
            return;
        }
        else{
            rear= rear+1;
            arr[rear]=x;
            cout<<x<<" pushed into queue\n";
            return;
        }
    }

    
    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            return;
        }
        else{
            cout<<arr[front]<<" popped from queue\n";
            front = front+1;
            // if front becomes greater than rear;
            if(front>rear){
                front = rear = -1;
            }
        }
    }

    int getFront(){
       if(isEmpty()){
        cout<<"Queue is Empty\n";
        return -1;
       }

       return arr[front];
   }


    int isSize(){

       if(isEmpty()){
        return 0;
       }

        return rear-front+1;
    }
};

//  20 19 20

int main(){
    
    Queue q(5);
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.isSize()<<endl;
    q.push(19);
    q.push(20);
    cout<<q.getFront()<<endl;
    cout<<q.isSize()<<endl;
    return 0;
}