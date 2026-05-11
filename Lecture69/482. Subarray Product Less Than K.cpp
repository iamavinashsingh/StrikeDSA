class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Code here
         if(k<=1){
            return 0;
         }

        int left = 0, right = 0, n = nums.size();
        int count = 0;
        int product = 1;
        
        while(right<n){
            product*=nums[right];

            while(product >= k){
                product /=nums[left];
                left++;
            }

            count+= (right-left+1);
            // window size: right -left+1
            right++;
        }

        return count;
        
    }
};