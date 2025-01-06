class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int area = INT_MIN;
        while(i < j){
            int mn = min(height[i],height[j]);
            area = max(area,(mn*(j-i)));
            if(mn == height[i]) i++;
            else j--;
        }
        return area;
    }
};