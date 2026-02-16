void reverse(string &s, int start, int end){
     
	//  base condotion
    
	if(start>=end){
		return;
	}




	swap(s[start],s[end]);

	reverse(s, start+1,end-1);
}



string reverseString(string &s) {
    // Your code here

	reverse(s,0,s.size()-1);

	return s;
}