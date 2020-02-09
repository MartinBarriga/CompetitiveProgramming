class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int beginningNum = prices[0];
        int sum = 0;
        for(int index = 1; index < prices.size(); index++){
            int currentNum = prices[index];
            if(currentNum <= beginningNum){
                beginningNum = currentNum;
            }
            else{
                int endingNum = currentNum;
                if(index+1 == prices.size()){ 
                    sum += (endingNum - beginningNum);
                    return sum;
                }
                index++;
                currentNum = prices[index];
                while(currentNum > endingNum){
                    endingNum = currentNum;
                    index++;
                    if(index == prices.size()){
                        sum += (endingNum - beginningNum);
                        return sum;
                    }
                    currentNum = prices[index];
                }   
                sum += (endingNum - beginningNum);
                beginningNum = currentNum;
            }
        }
        return sum;
        
    }
};