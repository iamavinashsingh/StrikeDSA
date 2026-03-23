#include<iostream>
using namespace std;

class Queue{

    public:
    int front,rear,capacity, totalElements;
    int *arr;

    Queue(int size){
        arr = new int[size];
        capacity = size;
        front = rear = -1;
        totalElements = 0;
    };

    bool isEmpty(){
        return totalElements==0;
    }

    bool isFull(){
        return totalElements==capacity;
    }

    void push(int x){
        if(isEmpty()){
            front=rear = 0;
            arr[rear] = x;
            totalElements++;
            cout<<x<<" pushed into queue\n";
            return;
        }
        else if(isFull()){
            cout<<"Queue is Full\n";
            return;
        }
        else{
            rear= (rear+1)%capacity;
            arr[rear]=x;
            totalElements++;
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
            front = (front+1)%capacity;
            totalElements--;

            if(totalElements==0){
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

       return totalElements;
    }
};

//   20 19 20 29 30 
int main(){
    
    Queue q(5);
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.isSize()<<endl;
    q.push(19);
    q.push(20);
    q.push(29);
    q.push(30);
    cout<<q.getFront()<<endl;
    cout<<q.isSize()<<endl;
    return 0;
}