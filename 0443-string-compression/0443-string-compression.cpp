class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i=0;i<n;i++){
            char ch = chars[i];
            int cnt = 0;
            while(i<n && ch == chars[i]){
                cnt++;
                i++;
            }
            if(cnt == 1){
                chars[idx++] = ch; 
            }
            else{
                chars[idx++] = ch;
                string s = to_string(cnt);
                for(char c: s){
                    chars[idx++] = c;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};