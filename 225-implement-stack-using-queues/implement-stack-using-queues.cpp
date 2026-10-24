class MyStack {
public:
    MyStack() {
        
    }
    queue<int> y;
    queue<int> z;
    void push(int x) {
        y.push(x);

    }
    
    int pop() {
        while(y.size()>1){
            z.push(y.front());
            y.pop();
        }
             
        int ans=y.front();
        y.pop();
        swap(y, z); 
        return ans;
    }
    
    int top() {
        while (y.size() > 1) {
            z.push(y.front());
            y.pop();
        }

        int ans = y.front();
        y.pop();
        z.push(ans);

        swap(y, z);
        return ans;
    }
    
    bool empty() {
        return y.empty() && z.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */