class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            buy=min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        return profit;
        /*for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                profit=prices[j]-prices[i];
                mxprofit=max(mxprofit,profit);
            }
        }
        mxprofit=max(mxprofit,profit);
        return mxprofit;*/
    }
};
