class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> acumulatedSum;
        unordered_map<int, int> lastSeenSum;
        int acum = 0;
        int maxLength = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0) acum--;
            else acum++;
            acumulatedSum.push_back(acum);
            lastSeenSum[acum] = i;
        }
        for(int i = 0; i < nums.size(); ++i){
            if(acumulatedSum[i] == 0){
                if(i + 1 > maxLength) maxLength = i+1;
            }            
            else{
                int currentLength = lastSeenSum[acumulatedSum[i]] - i;
                if(currentLength > maxLength) maxLength = currentLength;
            }
        }
        return maxLength;
    }
};