// Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        // store the last number in temp variable
        int temp = arr[n-1];
        
        // n-2 to 0, shift them one position to right
        
        for(int i=n-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        
        // oindex wale pe temp wale ko daal do
        
        arr[0] = temp;
    }
};