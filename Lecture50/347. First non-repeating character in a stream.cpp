string firstNonRepeating(string A) {
    
    vector<int>freq(26,0);
    string result;
    queue<char>q;

    for(int i=0;i<A.size();i++){

        // Increase the freq of character
        freq[A[i]-'a']++;


        // If freq of char is 1, push it into queue

        if(freq[A[i]-'a']==1){
            q.push(A[i]);
        }


        // check the front char of the queue, if its freq is 1, it means it is unique, make it
        // part of the answer, else pop it;

        while(!q.empty()&&freq[q.front()-'a']>1){
            q.pop();
        }

        if(!q.empty()){
            result.push_back(q.front());
        }
        else{
            result.push_back('#');
        }

    }


    return result;




}