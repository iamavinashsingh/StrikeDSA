#include<iostream>
using namespace std;

void print(int num){
    
    if(num==0){
        return;
    }

    cout<<num<<" ";
    print(num-1);
}

int main(){

    // 10 to 1 number print karana hai

    // for(int i=10;i>0;i--){
    //     cout<<i<<" ";
    // }

    print(10);

    return 0;
}