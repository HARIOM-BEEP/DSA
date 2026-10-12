class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=1,j=k;
        int sum=0;
        int mx=0;
        int avg=0;
        for(int l=0; l<k; l++){
            mx+=arr[l];
        }
        sum=mx;
        if (sum / k >= threshold) avg++;
        while(j<n){
            sum=sum-arr[i-1]+arr[j];
                
            if(sum/k>=threshold) avg++; 
            
            i++;
            j++;
        }
        return avg;
    }
};