class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int curr = 0;
        int high = curr;
        for(int i=0;i<n;i++){
            curr += gain[i];
            if(curr > high) high = curr;
        }
        return high;

    }
};