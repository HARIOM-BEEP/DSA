class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        if(n==2 && nums[0]!=nums[1]) return nums; 
        vector<int> a;
        sort(nums.begin(),nums.end());
        int cnt=1;
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                cnt++;
                if(cnt>n/3){
                    a.push_back(nums[i]);
                    while(i<n-1 && nums[i]==nums[i+1]){
                        i++;
                    }
                    cnt=1;
                }
            }
            else{
                
                cnt=1;
            }
        }
        return a;
    }
};