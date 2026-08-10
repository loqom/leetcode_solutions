class Solution {
public:
    int numRabbits(vector<int>& arr) {
        unordered_map<int,int> mp;
        int cn=0;
        for(int i=0;i<arr.size();i++){
            if(!mp[arr[i]+1]){
                cn+=arr[i]+1;
                if(arr[i]==0) continue;
                mp[arr[i]+1]=1;
            }
            else{
                mp[arr[i]+1]++;
                if(mp[arr[i]+1]==arr[i]+1) mp.erase(arr[i]+1);
            }
        }
        return cn;
    }
};