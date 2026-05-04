#include<iostream>
using namespace std;

// class Pairing{
//     public:
//     string first;
//     int second;
// };

bool cmp(pair<int,int>p1, pair<int,int>p2){
    // first ascending, second descending
    if(p1.first!=p2.first){
        return p1.first < p2.first;
    }

    return p1.second > p2.second;
}

int main(){
    // pair<int,int>p;
    // // syntax paglu

    // p = make_pair(10,20);

    // cout<<p.first<<" "<<p.second<<" ";

    // pair<string,int>p;

    // p.first = "Rohit";
    // p.second = 10;

    // cout<<p.first<<" "<<p.second<<" ";

    // Pairing p1;
    // p1.first = "Rohit";
    // p1.second = 10;

    // cout<<p1.first<<" "<<p1.second<<" ";

    // 2 value: 
    // 3 value ke pair banane ho, toh maharaj hum kya karenge
    // string, int, int

    // pair<string,pair<int,int>>p;
    // p.first = "Rohit";
    // p.second.first = 10;
    // p.second.second = 5;

    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";


    // vector<int>a = {10,20,30,40,50};

    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

    // for(int x : a){
    //     cout<<x<<" ";
    // }

    
    // for(int &x : a){
    //     x = x+10;
    // }

    // for(int x : a){
    //     cout<<x<<" ";
    // }



    // can I put pair inside a vector

    // vector<pair<int,int>>v;
    // v.push_back(make_pair(90,20));
    // v.push_back(make_pair(30,10));
    // v.push_back(make_pair(30,5));
    // v.push_back(make_pair(11,90));

    // for(pair<int,int> x : v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // for(auto x: v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // sort the vector: ascending

    // sort(v.begin(),v.end());
    // for(auto x: v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // first value check, then second value
    

    // sort them in descending order
    // sort them in descending order, first value, second

    // sort(v.begin(),v.end(),greater<pair<int,int>>());
    
    // for(auto x: v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }


    // customize
    // first value: ascending order, second: descending order

    // sort(v.begin(),v.end(),cmp);

    // for(auto x: v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }


    vector<pair<int,int>>v;
    v.push_back(make_pair(90,20));
    v.push_back(make_pair(30,10));
    v.push_back(make_pair(30,5));
    v.push_back(make_pair(11,90));


    // for(pair<int,int>::iterator it=v.begin();it!=v.end();it++){

    // }

    return 0;
}