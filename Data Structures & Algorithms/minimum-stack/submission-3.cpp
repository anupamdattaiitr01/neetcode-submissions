class MinStack {
    stack <int> st;
    stack <int> st_min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.size() ==0) st_min.push (val);
        else 
        {
            int num = st_min.top();
            num = min (num, val);
            st_min.push (num);
        }
        st.push (val);
    }
    
    void pop() {
        st.pop();
        st_min.pop();
    }
    
    int top() {
        // if (st.empty()) return -1;
        // else return st.top();
        return st.top();
    }
    
    int getMin() {
        // if (st_min.empty()) return -1;
        // else return st_min.top();
        return st_min.top();
    }
};
