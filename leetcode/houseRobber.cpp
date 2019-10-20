class Solution {
public:
    vector<int> answ = vector<int>(1001,-1);
    int dp(vector<int> nums, int index){
        if(index >= nums.size()) return 0;
        else if(answ[index] == -1){
            answ[index] = max( dp(nums, index+1), dp(nums, index+2) + nums[index]);
        }
        return answ[index];
    }
    int rob(vector<int>& nums) {
        return dp(nums, 0);
    }
};