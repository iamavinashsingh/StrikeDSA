#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
   
    // set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(5);
    // s.insert(13);
    // s.insert(10);
    
    // // insertion, deletion, search: log(N)
    // for(auto x: s){
    //     cout<<x<<" ";
    // }

    // set<pair<int,int>>s1;
    // s1.insert({10,20});
    // s1.insert({5,11});
    // s1.insert({54,8});
    // s1.insert({7,9});
    // s1.insert({10,10});

    // for(auto x: s1){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // cout<<s1.size();
    // s1.erase({10,10});
    // cout<<s1.size();

    // set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(30);

    // if(s.find(90)!=s.end()){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }
    
    // true or false
    // auto it = s.find(90);
    // cout<<*it<<endl;
   
    // unique element
    // sorted order mein nahi hoga
    // search, insert, delete o(1)
    // hashmap: karta (Black Box)
    // unordered_set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(30);
    // s.insert(5);

    // for(auto x: s){
    //     cout<<x<<" ";
    // }


    // sorted order, duplicate entry bhi allowed kar raha hu

    // multiset<int>s1;
    // s1.insert(10);
    // s1.insert(20);
    // s1.insert(10);
    // s1.insert(30);

    // for(auto x:s1){
    //     cout<<x<<" ";
    // }



    // duplicate entry allowed ho, sorted na bhi ho toh chalega, o(1)

    unordered_multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);

     for(auto x:s){
        cout<<x<<" ";
     }
    return 0;
}