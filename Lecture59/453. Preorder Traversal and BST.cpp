class Solution {
public:
    
    void isValid(int arr[],int N, int minValue, int maxValue, int &index){

        if(index>=N || arr[index] < minValue || arr[index] > maxValue){
            return;
        }

        int value = arr[index];
        index++;

        isValid(arr,N,minValue,value,index);
        isValid(arr,N,value,maxValue,index);
    }

    int canRepresentBST(int arr[], int N) {
        // Your code here
        
        int index = 0;
        isValid(arr,N,INT_MIN,INT_MAX,index);

        return index>=N;
    }
};