class MyStack {
public:

    int arr[100];
	int index;

    MyStack() {
         index = -1;
    }
    
    void push(int x) {
        if(index==99){
			return;
		}
		else{
			index++;
			arr[index]=x;
		}
    }
    
    int pop() {
		if(index==-1){
			return -1;
		}
        int val = arr[index--];
		return val;
    }
};