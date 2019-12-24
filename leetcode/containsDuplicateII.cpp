class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seenNums;
        for(int index = 0; index < nums.size(); index++){
            int currentNum = nums[index];
            if(seenNums.count(currentNum) == 1){
                if(index - seenNums[currentNum] <= k ){
                    return true;
                }
                else{
                    seenNums[currentNum] = index;
                }
            }
            else{
                seenNums[currentNum] = index;
            }
        }
        return false;
    }
};