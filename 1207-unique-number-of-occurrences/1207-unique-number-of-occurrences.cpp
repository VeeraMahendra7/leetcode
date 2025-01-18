class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i: mp){
            int rep = i.second;
            for(auto j: mp){
                if(i!=j && rep == j.second) return false;
            }
        }
        return true;
    }
};