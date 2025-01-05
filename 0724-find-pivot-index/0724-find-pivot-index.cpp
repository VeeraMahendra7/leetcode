class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int idx = -1, n = nums.size();
        int lSum = 0, rSum = 0;
        for(int i=0;i<n;i++){
            rSum += nums[i];
        }
        for(int i=0;i<n;i++){
            lSum += nums[i];
            if(lSum == rSum){
                idx = i;
                break;
            }
            rSum -= nums[i];
        }
        return idx;

    }
};