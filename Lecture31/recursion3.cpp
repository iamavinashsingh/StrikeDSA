#include<iostream>
using namespace std;

void printEven(int num){
    
    if(num==0)
    return;
    
    cout<<num<<" ";
    printEven(num-2);
}

int main(){

    // 20 to 1, even number print karao
    
    printEven(20);

    return 0;

}