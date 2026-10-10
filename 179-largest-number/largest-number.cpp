
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        string s[100];

        for (int i = 0; i < n; i++) {
            s[i] = to_string(nums[i]);
        }

        // Arrange numbers by comparing concatenations
        sort(s, s + n, [](string a, string b) {
            return a + b > b + a;
        });

        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += s[i];
        }

        // Handle cases like [0, 0]
        if (ans[0] == '0') return "0";

        return ans;
    }
};
