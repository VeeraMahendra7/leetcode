class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = 0;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
                ans = mid;
                break;
            }
            else if(nums[mid-1] > nums[mid]){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};