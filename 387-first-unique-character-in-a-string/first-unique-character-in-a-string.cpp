class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> t(26,0);
        int n=s.size();
        char c;
        for(int i=0; i<n; i++){
            t[s[i]-'a']++;
        }
        
        for(int i=0; i<n; i++){
            if(t[s[i]-'a']==1) return i;
        }
        return -1;
    }
};