class Solution {
public:
    int reverseInteger(int num) {
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }   
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int u=reverseInteger(nums[i]);
            nums.push_back(u);
        }
        unordered_set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        return s.size();
    }
};