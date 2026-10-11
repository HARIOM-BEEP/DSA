class Solution {
public:
    int reverse(int x) {
        
        long long t=x;

        long long k=0;
        bool ch=0;
        if(t<0){
            t=-t;
            ch=1;
        }
        
        while(t>0){
            
            k=k*10+t%10;
            t=t/10;

        }
        if(k>INT_MAX || k<INT_MIN) return 0;
        else if(ch==1) return -k;
        return k;
    }
};