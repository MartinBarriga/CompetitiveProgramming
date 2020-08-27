class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index = 0;
        int profit = 0;
        while(index < prices.size()) {
            //traverse decreasing streak
            int decreasingIndex = index + 1;
            while(decreasingIndex < prices.size() && prices[decreasingIndex-1] >= prices[decreasingIndex]) {
                decreasingIndex++;
            }
            int buyingIndex = decreasingIndex - 1;
            
            //traverse increasing streak
            int increasingIndex = buyingIndex + 1;
            while(increasingIndex < prices.size() && prices[increasingIndex-1] <= prices[increasingIndex]) {
                increasingIndex++;
            }
            int sellingIndex = increasingIndex - 1;
            
            profit += (prices[sellingIndex] - prices[buyingIndex]);
            index = sellingIndex + 1;
        }
        return profit;
    }
};