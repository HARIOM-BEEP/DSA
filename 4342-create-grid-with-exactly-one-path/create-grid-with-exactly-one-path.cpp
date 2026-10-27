class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> t;
           
        for(int i=0; i<m; i++){
                string j; 
                if(i==0){
                    for(int k=0; k<n; k++){
                        j.push_back('.');
                    }
                }
                
                else{
                    for(int k=0; k<n-1; k++){
                        j.push_back('#');
                    }
                    j.push_back('.');
                }
                t.push_back(j);
            
        }
        return t;
     
    }
};
