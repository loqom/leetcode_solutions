class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());  
        long long m1 = mass;
        for (int i:asteroids) {
            if(m1<i) return false;
            m1+=i;
        }
        return true;
    }
};