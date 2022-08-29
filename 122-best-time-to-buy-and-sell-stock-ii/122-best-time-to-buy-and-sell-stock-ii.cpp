class Solution {
public:
    
    
    int maxProfit(vector<int>& prices) {
    
        int netprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
                netprofit+=prices[i]-prices[i-1];
        }
        return netprofit;
    }
};