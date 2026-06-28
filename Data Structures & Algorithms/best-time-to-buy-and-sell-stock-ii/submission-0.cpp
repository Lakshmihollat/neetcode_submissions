class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buy=prices[0];
        int tot=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<prices[i-1]){
                continue;
            }
            else if(prices[i]>prices[i-1])
            {
                tot+=prices[i]-prices[i-1];
            }
        }
        return tot;
    }
};