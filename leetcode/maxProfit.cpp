class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int min = prices[0];
        int max = prices[0];
        int answ = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min) {
                min = prices[i];
                max = prices[i];
            }
            if(prices[i] > max){
                max = prices[i];
                if(max > answ)answ = max-min;
            }
        }
        return answ;
    }
};