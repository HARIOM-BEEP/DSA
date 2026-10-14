class Solution {
public:
    int calPoints(vector<string>& op) {
        int n=op.size();
        stack<int> c;
        stack<int> h;
        int idx=0;
        int sum=0;
        for(int i=0; i<n; i++){
            if(op[i]=="+") {
                while(idx<2){
                    h.push(c.top());
                    sum+=h.top();
                    c.pop();
                    idx++;
                    
                }
                idx=0;
                while(h.size()>0){
                    c.push(h.top());
                    
                    h.pop(); 
                    
                }
                c.push(sum);
                sum=0;
                
            }
            else if(op[i]=="D") {
                c.push(c.top()*2);
            }
            else if(op[i]=="C") {
                c.pop();
            }
            else{
                c.push(stoi(op[i]));
            }
            
        }
        int ans=0;
        while(c.size()>0){
            ans+=c.top();
            c.pop();
        }
        return ans;
    }
};