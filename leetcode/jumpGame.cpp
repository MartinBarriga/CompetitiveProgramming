class Solution {
public:
    bool canJump(vector<int>& nums) {
        int nearestAvailableIndex = 1;
        for(int index = nums.size() - 2; index >= 0; index--){
            if(nums[index] >= nearestAvailableIndex) {
                nearestAvailableIndex = 1;
            }
            else{
                nearestAvailableIndex++;
            }
        }
        if(nearestAvailableIndex == 1) return true;
        return false;
    }
};