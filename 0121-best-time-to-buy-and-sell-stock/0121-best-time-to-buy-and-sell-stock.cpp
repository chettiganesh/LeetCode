class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxs=0;
        int mini=prices[0];
        int n = prices.size();
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            int diff=prices[i]-mini;
            maxs=max(diff,maxs);
            
        }
        return maxs;
    }
};