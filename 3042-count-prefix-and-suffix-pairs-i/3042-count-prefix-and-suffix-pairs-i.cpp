class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        int n = words.size();
        for(int i=0;i<n-1;i++){
            string s1 = words[i];
            for(int j=i+1;j<n;j++){
                string s2 = words[j];
                if(s2.length() < s1.length()) continue;
                string pre = s2.substr(0,s1.length());
                string suf = s2.substr(s2.length() - s1.length());
                if(pre == s1 && suf == s1) cnt++;
            }
        }
        return cnt;
    }
};