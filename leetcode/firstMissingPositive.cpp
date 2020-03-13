class Solution {
public:
    
    int moveElementsAndReturnLastPositive(vector<int>& nums){
        int end = nums.size()-1;
        while(end >= 0 && nums[end] <= 0){
            end--;
        }
        for(int currentIndex = end-1; currentIndex >= 0; currentIndex--){
            if(nums[currentIndex] <= 0){
                swap(nums[currentIndex], nums[end]);
                end--;
            }
        }
        return end;
    }
    
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size() == 0) return 1;
        int end = moveElementsAndReturnLastPositive(nums);
        if(end == -1) return 1;
        
        for(int i = 0; i<= end; i++){
            //paint(nums[i] - 1, end, nums);
            int nextNum = abs(nums[i]) - 1;
            if(nextNum <= end){
                if(nums[nextNum] > 0) nums[nextNum]*=-1;
            }
        }
        for(int i = 0; i <= end; i++){
            if(nums[i] > 0) return i+1;
        }
        return end+2;
    }
};