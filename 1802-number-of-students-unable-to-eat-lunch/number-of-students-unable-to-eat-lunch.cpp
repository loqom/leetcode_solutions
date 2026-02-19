class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) {
        queue<int> q;
        for(int i:stu) q.push(i);
        int i=0;
        int cn=0;
        int n=stu.size();
        while(q.size()){
            if(cn>q.size()) return q.size();
            if(q.front()==sand[i]){
                i++;
                q.pop();
                cn=0;
            }
            else{
                cn++;
                q.push(q.front());
                q.pop();
            }
        }
        return 0;
    }
};