class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int sell = 0, buy = -prices[0];
        for (int i = 1; i < n; i++) {
            sell = max(sell, buy + prices[i] - fee);
            buy = max(buy, sell - prices[i]);
        }
        return sell;
    }
};
