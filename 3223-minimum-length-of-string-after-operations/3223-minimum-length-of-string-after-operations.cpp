class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for(auto i: s) mp[i]++;
        int len = 0;
        for(auto i: mp){
            if(i.second > 2){
                if(i.second%2 == 0) len += (i.second-2);
                else len += (i.second-1);
            }
        }
        return s.size()-len;
    }
};