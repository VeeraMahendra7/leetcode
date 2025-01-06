class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        for(int i=0;i<n+1;i++){
            int cnt = 0;
            int curr = i;
            while(curr){
                int temp = curr & 1;
                cnt += temp;
                curr >>= 1;
            }
            v[i] = cnt;
        }
        return v;
    }
};