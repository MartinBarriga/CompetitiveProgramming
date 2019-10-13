class Solution {
public:
    void invert(vector<int>& nums, int begin, int end){
        int aux;
        for(int i = begin; i < (begin + end + 1)/2; i++){
            aux = nums[i];
            nums[i] = nums[end+begin-i];
            nums[end+begin-i] = aux; 
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k > 0){
            invert(nums, 0, nums.size()-1);
            invert(nums, 0, k-1);
            invert(nums, k, nums.size()-1);
        }
    }
};