class SpecialStack {
  public:
    stack<long long>st;
    void push(int x) {
        // code here
        if(st.empty()){
            long long a = x;
            st.push(a*1000000001+a);
        }
        else{
            long long minElement = st.top()%1000000001;
            long long a = x;
            minElement = min(a,minElement);
            st.push(a*1000000001+minElement);
        }
    }
    void pop() {
        // code here
        if(st.empty()){
            return;
        }

        st.pop();
    }
    int peek() {
        // code here
        if(st.empty()){
            return -1;
        }

        long long element = st.top()/1000000001;
        int el = element;
        return el;
    }
    int getMin() {
        // code here
         // code here
        if(st.empty()){
            return -1;
        }

       long long element = st.top()%1000000001;
       int el = element;
       return el;
    }
    bool isEmpty() {
        // code here
        return st.empty();
    }
};