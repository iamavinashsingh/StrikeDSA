#include<iostream>
using namespace std;


int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    cout<<s.size()<<"\n";
    cout<<s.empty()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
}