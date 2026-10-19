class MinStack {
    stack<int> st;
    stack<int> ht;
    int mn=INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int value) {

        st.push(value);
        if(st.top()<=mn){
            mn=st.top();
            ht.push(mn);
        }
    }
    
    void pop() {
        if (st.empty()) return;

        if (st.top() == mn) {
            ht.pop();
        }

        st.pop();

        if (ht.empty()) {
            mn = INT_MAX;
        } else {
            mn = ht.top();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        // stack<int> helper;
        // if(ch==0){
        //     ch=1;
        //     while(st.size()>0){
        //     mn=min(mn,st.top());
        //     helper.push(st.top());
        //     st.pop();
        //     }
        //     while(helper.size()>0){
        //         st.push(helper.top());
        //         helper.pop();
        //     }
        // }
        return mn;
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */