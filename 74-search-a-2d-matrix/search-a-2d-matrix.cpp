class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int n=mat.size();
        int m=mat[0].size();
        int i=0,j=n-1;
        int mid=0;
        if(n==1 && m==1){
            if(mat[0][0]==target) return 1;
            else return 0;
        }
        
            while(i<=j){
            mid=(i+j)/2;
            if(target==mat[mid][0]) return 1;
            else if(mat[mid][0]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }

        }
        if(j < 0) return false;
        
        i=0;
        int k=m-1;
        mid=0;
        
            while(i<=k){
            mid=(i+k)/2;
            if(target==mat[j][mid]) return 1;

            else if(mat[j][mid]<target){
                i=mid+1;
            }
            else{
                k=mid-1;
            }
        }
        
        return 0;
    }
};