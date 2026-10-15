class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        string p;
        vector<int> ps;
        ps.push_back(0);
        long long sum=0;
        for (int i = n - 1; i >= 0; i--) {
            sum = (sum + shifts[i]) % 26;
            ps.push_back(sum);
        }
        reverse(ps.begin(),ps.end());
        for (int i = 0; i < n; i++) {
            char c = s[i];
            c = 'a' + (c - 'a' + ps[i]) % 26;
            p.push_back(c);
        }
        
        return p;
            
    }
};