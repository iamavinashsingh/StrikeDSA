#include<iostream>
using namespace std;

void print(int num, int n){
    
    if(num==n+1){
        return;
    }

    cout<<num<<" ";
    print(num+1, n);
}


int main(){
    
    int n;
    cin>>n;
    print(1,n);

    return 0;
}