class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indexToSet = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[indexToSet] = nums[i];
                indexToSet++;
            }
        }
        for(int i = indexToSet; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};