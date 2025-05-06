class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mxProfit = 0, mnDay = prices[0];
        for(int i=1;i<n;i++){
            mnDay = min(mnDay, prices[i]);
            mxProfit = max(mxProfit, (prices[i]-mnDay));
        }
        return mxProfit;
    }
};