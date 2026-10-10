class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string> s;
        int k=0;
        string ans;
        string str;
        

        for (int i = 0; i < nums.size(); i++) {
            s.push_back(to_string(nums[i]));
        }
        sort(s.begin(), s.end(), [](string a, string b) {
            return a + b > b + a;
        });

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s[i].size(); j++) {
                ans.push_back(s[i][j]);
            }
        }
        if (ans[0] == '0') return "0";
        
        return ans;
    }
};