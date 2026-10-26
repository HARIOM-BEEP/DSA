class Solution {
public:
    int arrangeCoins(int n) {
        long long mid=0;
        long long i=1,j=n;

        while(i<=j){
            mid=mid = i + (j - i) / 2;;
            if(mid%2==0){
                if(n<mid*(mid/2)+(mid/2)){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                if(n<mid*((mid/2)+1)){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
        }
        return i-1;
    }
};