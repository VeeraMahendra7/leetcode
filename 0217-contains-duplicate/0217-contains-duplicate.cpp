class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int num = nums[i];
            if(mp.find(num) != mp.end()){
                return true;
            }
            mp[num] = i;
        }
        return false;
    }
};