class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        stack<int> st;
        vector<int> an(n,-1);
        for(int i=n-1; i>=0; i--){
            while(st.size()>0 && nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.size()>0) an[i]=st.top();
            st.push(i);
        }
        vector<int> ans(n-k+1);
        int j;
        for(int i=0; i<n-k+1; i++){
            if(j<i) j=i;
            while(an[j] != -1 && an[j] < i+k)
                j=an[j];
            ans[i] = nums[j];
        }
        return ans;
    }
};