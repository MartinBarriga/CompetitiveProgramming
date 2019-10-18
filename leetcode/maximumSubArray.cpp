class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int maxSum = nums[0];
        int currentSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(currentSum < 0){
                currentSum = nums[i];
            }
            else{
                currentSum += nums[i];
            }
            if(currentSum > maxSum) maxSum = currentSum;
        }
        return maxSum;
    }   
};