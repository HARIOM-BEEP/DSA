class MyQueue {
public:
    stack<int> y;
    stack<int> z;
    MyQueue() {
        
        
    }
    
    void push(int x) {
        y.push(x);

    }
    
    int pop() {
            
        if(z.size()==0){
            while(y.size()>0){
                z.push(y.top());
                y.pop();
            }
        }

        int ans=z.top();
        z.pop();
        return ans;
    }
    
    int peek() {
        if(z.size()==0){
            while(y.size()>0){
                z.push(y.top());
                y.pop();
            }
        }
        return z.top();
    }
    
    bool empty() {
        return y.empty() && z.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */