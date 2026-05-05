#include<iostream>
// #include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
   
    unordered_multimap<string,int>m;

    // how to insert value inside it
    // m["rohit"] = 10;
    // m["alok"] = 20;
    // m["rohan"] = 70;

    // second method

    m.insert({"harsh",10});
   

    // cout<<m["harsh"]<<" ";
//   x =  {"rohit",10}
    // for(auto x: m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // auto it = m.find("ohit");

    // if(it!=m.end()){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }


    return 0;

}