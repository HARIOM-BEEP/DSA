class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int k=nums1.size();
        vector<int> a;
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(st.size()>0 && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.size()>0) ans[i]=st.top();
            st.push(nums2[i]);
            
        }
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(nums1[i]==nums2[j]){
                    a.push_back(ans[j]);
                }
            }
        }
        return a;
    }
};