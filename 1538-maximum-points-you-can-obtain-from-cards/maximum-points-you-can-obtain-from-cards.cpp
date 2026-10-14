class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        // vector<int> ps;
        int n=cp.size();
        // ps.push_back(0);
        int sum=0;
        int max=0;
        for(int i=0; i<k; i++){
           
            sum+= cp[i];
        }
        max=sum;
        for(int i=0; i<k; i++){
            sum=sum-cp[k-i-1]+cp[n-i-1];
            if(sum>max) max=sum;
        }
        
        return max;
    }
};