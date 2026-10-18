class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> ft;
        int n=heights.size();
        vector<int> f(n,-1);
        vector<int> b(n,n);
        stack<int> bt;
        
        for(int i=0; i<n; i++){
            while(ft.size()>0 && heights[ft.top()]>=heights[i]){
                ft.pop();
                
            }
            if(!ft.empty()) {
                f[i] = ft.top();
            }
            ft.push(i);

        }
        for(int i=n-1; i>=0; i--){
            while(bt.size()>0 && heights[bt.top()]>=heights[i]){
                bt.pop();
                
            }
            if(!bt.empty()) {
                b[i] = bt.top();
            }

        bt.push(i);

        }

        int mx=0;
        
        for(int i=0; i<n; i++){
            int sum=heights[i]*(b[i]-f[i]-1);
            if(sum>mx) mx=sum;
        }
        return mx;
    }
};