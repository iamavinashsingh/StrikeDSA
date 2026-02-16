#include<iostream>
using namespace std;

void print(int arr[],int index, int n){
   
    // base condition
    if(index==n)
    return;


    // print karna hai
    cout<<arr[index]<<endl;
    print(arr,index+1,n);
}

int main(){

    int arr[10] = {2,3,4,1,5,9,7,8,10,21};

    print(arr,0,10);
    return 0;
}