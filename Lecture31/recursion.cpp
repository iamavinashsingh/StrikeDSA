#include<iostream>
using namespace std;

// recursion

void BirthDayCount(int i){
    // stop condition: break, base condition

    if(i==0){
        cout<<"Happy Birthday";
        return;
    }

    cout<<i<<" days left for birthday\n";
    BirthDayCount(i-1);
}


int main(){

    // for(int i=30;i>0;i--){
    //     BirthDayCount(i);
    // }

    BirthDayCount(30);

    // cout<<"Happy birthday";
    return 0;
}