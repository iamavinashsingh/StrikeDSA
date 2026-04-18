class Solution {
public:
    
    void buildBST(int arr[], int N, int minValue, int maxValue, int &index){

      // base condition
      if(index>=N || arr[index]<minValue || arr[index]>maxValue){
        return;
      } 


    //   node build kar sakte ho
    int val = arr[index];
    index++;
    
    buildBST(arr,N,minValue,val,index);
    buildBST(arr,N,val,maxValue,index);

    }

    int canRepresentBST(int arr[], int N) {
        // Your code here
        int index = 0;
        buildBST(arr,N,INT_MIN,INT_MAX, index);

        return index>=N;
    }
};