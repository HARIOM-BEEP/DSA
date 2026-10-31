class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int i=0,j=n-1;
        int mid=0;
        while(i<=j){
            mid = i + (j - i) / 2;
            
            if(mid==0){
                if(nums[mid]>nums[mid+1]) return 0;
                i=mid+1;
            }
            else if(mid==n-1) {
                if(nums[mid]>nums[mid-1]) return n-1;
                j=mid-1;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};