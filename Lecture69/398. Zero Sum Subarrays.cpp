class Solution {
public:
    // Function to count subarrays with sum equal to 0.
    long long findSubarray(vector<long long> &arr, int n) {
        // Your code here
        long long prefixSum = 0;
        unordered_map<long long, int>count;
        long long result = 0;
        count[0] = 1;

        for( long long val: arr){
            prefixSum+=val;
            
            // if Prefix sum exist in unordered map, it wil return the count of prefixSum
            // else it will return 0
            result+= count[prefixSum];
            count[prefixSum]++;
        }

        return result;

    }
};