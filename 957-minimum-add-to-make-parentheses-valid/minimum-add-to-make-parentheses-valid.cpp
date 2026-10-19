class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int n=s.size();
        stack<char> st;
        for(int i=n-1; i>=0; i--){
            if(st.size()==0 || st.top()=='('){
                st.push(s[i]);
                cnt++;
            }
            else if(st.top()==')' && s[i]=='('){
                cnt--;
                st.pop();
            }
            else{
                cnt++;
                st.push(s[i]);
            }
            
        }
        return cnt;
    }
};