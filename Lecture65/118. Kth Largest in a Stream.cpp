vector<int> kthLargest(vector<int>& arr, int k) {
    // min heap
    priority_queue<int, vector<int>, greater<int>>pq(arr.begin(),arr.begin()+k); 
    
    // k= 4, fist 3 answer = -1
    vector<int>ans(k-1,-1);
    ans.push_back(pq.top());

    for(int i=k;i<arr.size();i++){
        // when we have to pop from the priority queue, top k largest elemenent
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }

        ans.push_back(pq.top());
    }  

    return ans;
}