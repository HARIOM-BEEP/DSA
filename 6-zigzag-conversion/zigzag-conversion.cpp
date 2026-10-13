class Solution {
public:
    string convert(string s, int k) {
        int n=s.size();
        int idx=0;
        string ans;
        if(k==1) return s;
        if(k==2){
            for(int i=0; i<n; i+=2){
                ans.push_back(s[i]);
            }
            for(int i=1; i<n; i+=2){
                ans.push_back(s[i]);
            }
            return ans;
        }
        
        for(int i=0; i<k-1; i++){
            for(int j=i; j<n; j+= 2*k-2){
                ans.push_back(s[j]);
                if(idx>0 && j + 2*k-2-2*idx<n) ans.push_back(s[j+2*k-2-2*idx]); 

            }
            idx++;
            
        }
        for(int j=k-1; j<n; j+=2*k-2){
                ans.push_back(s[j]);
            }
        return ans;
          
    }
};