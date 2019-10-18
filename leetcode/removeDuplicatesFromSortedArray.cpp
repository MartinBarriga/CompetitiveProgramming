class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int lastNum = nums[0];
        int indexToSet = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != lastNum){
                nums[indexToSet] = lastNum;
                lastNum = nums[i];
                indexToSet++;
            }
        }
        nums[indexToSet] = lastNum;
        return indexToSet+1;   
    }
};