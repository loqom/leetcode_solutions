class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> freq;
        for(int x : nums) {
            freq[x]++;
        }
        for (auto &p : freq) {      
            if (p.second == n) {    
                return p.first;
            }
        }
        return 0;
    }
};