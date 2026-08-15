class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area=INT_MIN;
        while(i<j){
            if(height[i]>height[j]){
                int a=height[j]*(j-i);
                area=max(a,area);
                j--;
            }
            else if(height[i]<height[j]){
                int a=height[i]*(j-i);
                area=max(a,area);
                i++;
            }
            else{
                int a=height[i]*(j-i);
                area=max(a,area);
                i++;
                j--;
            }
        }
        return area;
    }
};