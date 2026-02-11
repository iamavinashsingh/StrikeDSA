#include<iostream>
using namespace std;

int sumNumber(int number){

    if(number==0)
    return 0;
    
    return number+sumNumber(number-1);
}

int main(){

    // sum of number from 20 to 1

    int sum = sumNumber(20);

    // for(int i=20;i>0;i--){
    //     sum=sum+sumNumber(i);
    // }

    cout<<sum;

    return 0;
}