class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();

        for(int i=n-1; i>=0; i--){
            if(st.size()==0 || st.top()!=s[i]){
                st.push(s[i]);
            }
            else {
                st.pop();
                
            }
        }
        string k;
        while(st.size()>0){
            k.push_back(st.top());
            st.pop();
        }
        return k;
    }
};