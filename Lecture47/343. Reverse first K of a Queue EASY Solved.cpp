class Solution {
public:
    queue<int> modifyQueue(queue<int> q, int k) {
        // Your code here

        if(k>q.size()){
            return q;
        }

        stack<int>s;
        // insert first k element of queue into stack
        for(int i=0;i<k;i++){
            s.push(q.front());
            q.pop();
        }

        // insert all elements of stack into queue

        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }

        int totalElements = q.size()-k;

        while(totalElements){
            q.push(q.front());
            q.pop();
            totalElements--;
        }

        return q;
    }
};