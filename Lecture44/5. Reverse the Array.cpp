void reverseArray(vector<int>& arr) {

   stack<int>s;

//    push all the element of array into stack

   for(int i=0;i<arr.size();i++){
	s.push(arr[i]);
   }


//  pop all the element of stack and push them in the array;


  for(int i=0;i<arr.size();i++){
	arr[i] = s.top();
	s.pop();
  }

}