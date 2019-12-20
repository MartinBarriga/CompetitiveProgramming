class Solution {
public:
    void swap(int left, int right, vector<int>&nums){
        int aux; 
        while(left < right){
            aux = nums[left];
            nums[left] = nums[right];
            nums[right] = aux;
            left++;
            right--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int index = nums.size()-2;
        int indexThatBrokeSequence;
        int aux;
        while(index >= 0 && nums[index] >= nums[index+1]){
            index--;   
        }
        if(index == -1){
            swap(0, nums.size()-1, nums);   
        }
        else{
            indexThatBrokeSequence = index;
            index++;
            while(index < nums.size() && nums[index] > nums[indexThatBrokeSequence]){
                index++;
            }
            index--;
            aux = nums[indexThatBrokeSequence];
            nums[indexThatBrokeSequence] = nums[index];
            nums[index] = aux;
            swap(indexThatBrokeSequence + 1, nums.size()-1, nums);   
        }
    }
};