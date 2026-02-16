int linear(vector<int>& arr, int index, int n, int target){


// base condition

    if(index==n){
		return -1;
	}



	if(arr[index]==target){
		return index;
	}


	return linear(arr,index+1,n,target);
}


int linearSearch(vector<int>& arr, int target) {
    //code here


	return linear(arr,0,arr.size(),target);
}