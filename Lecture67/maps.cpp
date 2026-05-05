#include<iostream>
#include<map>
using namespace std;

int main(){
   
    map<string,int>m;

    // multimap<string,int>m;

    // how to insert value inside it
    m["rohit"] = 10;
    m["alok"] = 20;
    m["rohan"] = 70;

    // second method

    m.insert({"harsh",10});

    // cout<<m["harsh"]<<" ";
//   x =  {"rohit",10}
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;

}