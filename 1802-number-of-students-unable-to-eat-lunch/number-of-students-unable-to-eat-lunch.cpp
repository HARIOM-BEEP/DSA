class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        int n=students.size();
        for(int i=0; i<n; i++){
            q.push(students[i]);
        }
        int i=0;
        int t=0;
        while(q.size()>0){
            
                if(sandwiches[i]==q.front()){
                    q.pop();
                    i++;
                    t=0;
                }
            else{
                q.push(q.front());
                q.pop();
                t++;
            }
            if(t==q.size()) break;
        }
        return q.size();
    }
};