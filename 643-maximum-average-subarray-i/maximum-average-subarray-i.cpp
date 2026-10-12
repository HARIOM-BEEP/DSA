class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=1;
        int j=k;
        int cal=0;
        double mx=0;
        for(int l=0; l<k; l++){
            mx=mx+nums[l];
        }
        cal=mx;
        while(j<n){
            
            cal=cal-nums[i-1]+nums[j];
            if(cal>mx) mx=cal;
            
            i++;
            j++;
        }
        return mx/k;
    }
};