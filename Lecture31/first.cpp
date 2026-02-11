#include<iostream>
using namespace std;

int main(){

    int **arr = new int*[5];

    for(int i=0;i<5;i++){
        arr[i] = new int[6];
    }

    // 2d array create ho chuka hai

    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            arr[i][j] = i+j;
        }
    }

    //  print the 2d array

    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}