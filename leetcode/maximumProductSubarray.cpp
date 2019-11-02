class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int Solution = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int tempMax = currentMax;
            currentMax = max(currentMax*nums[i],max(nums[i], currentMin*nums[i]));
            currentMin = min(currentMin*nums[i], min(nums[i], tempMax*nums[i]));
            if(currentMax > Solution) Solution = currentMax;
        }
        return Solution;
    }
};