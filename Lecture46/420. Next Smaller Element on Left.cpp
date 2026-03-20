class Solution {
public:
    vector<int> Smallestonleft(int arr[], int n) {
        set<int> s;
        vector<int> res(n, -1);
        for(int i=0; i<n; i++) {
            auto it = s.lower_bound(arr[i]);
            if(it != s.begin()) {
                it--;
                res[i] = *it;
            }
            s.insert(arr[i]);
        }
        return res;
    }
};