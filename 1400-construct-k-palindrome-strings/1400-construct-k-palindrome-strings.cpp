class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k) return false;
        map<char,int>mp;
        for(auto i: s){
            mp[i]++;
        }
        int oddcnt = 0;
        for(auto i: mp){
            if(i.second%2 == 1) oddcnt++;
        }
        return oddcnt <= k;
    }
};