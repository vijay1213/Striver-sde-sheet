class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit= 0;
        int min_1 = prices[0];
        
        for(int i = 0; i < prices.size(); i++) {
            
            min_1 = min(min_1, prices[i]);
            int profit = prices[i] - min_1;
            
            max_profit = max(max_profit, profit);
            
            
        }
        
        return max_profit;
        
    }
};
