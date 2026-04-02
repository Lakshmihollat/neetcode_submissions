class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            cost=min(cost,prices[i]);
            
            maxprofit = max(maxprofit,prices[i]-cost);
        }
        return maxprofit;
    }
};
