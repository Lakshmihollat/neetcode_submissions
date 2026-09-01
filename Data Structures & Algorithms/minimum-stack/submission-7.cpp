class MinStack {
public:
stack<int>st,minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty() || val<=minst.top())
        {
            minst.push(val);
        }
    }
    
    void pop() {
        int p=st.top();
        st.pop();
        if(minst.top()==p)
        {
            minst.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
