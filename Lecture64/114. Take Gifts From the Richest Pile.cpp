long long pickGifts(vector<int>& gifts, int k) {
    
    // max heap build karo
   priority_queue<int>pq(gifts.begin(),gifts.end());

    long long ans = 0;
    for(int i=0;i<gifts.size();i++){
        ans+=gifts[i];
    }
    
    int remaining;
    while(k){
        remaining= pq.top();
        pq.pop();
        ans-= remaining-sqrt(remaining);
        pq.push(sqrt(remaining));
        k--;
    }

    return ans;
}