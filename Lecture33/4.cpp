#include<iostream>
using namespace std;

void print(int arr[],int index){
   
//    base
    if(index==-1)
    return;
    
    // decrese the index
    print(arr,index-1);
    // then print element
    cout<<arr[index]<<endl;

}
   


int main(){

    int arr[10] = {2,3,4,1,5,9,7,8,10,21};

    print(arr,9);
    return 0;
}