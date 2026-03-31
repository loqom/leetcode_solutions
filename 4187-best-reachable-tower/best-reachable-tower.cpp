class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int n=towers.size();
        int qf=INT_MIN;
        int iqf=-1;
        for(int i=0;i<n;i++){
            int md=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
            if(md<=radius){
                if(towers[i][2]>qf){
                    qf=towers[i][2];
                    iqf=i;
                }
                else if(towers[i][2]==qf){
                    if(towers[i][0] < towers[iqf][0] || (towers[i][0] == towers[iqf][0] && towers[i][1] < towers[iqf][1])) iqf=i;
                }
            }
        }
        if(iqf==-1) return {-1,-1};
        return {towers[iqf][0],towers[iqf][1]};
    }
};