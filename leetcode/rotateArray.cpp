class Solution {
public:
    void swapArray(int begin, int end, vector<int>& nums){
        while(begin < end) {
            swap(nums[begin], nums[end]);
            begin++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        swapArray(0, nums.size()-1, nums);
        swapArray(0, k - 1, nums);
        swapArray(k, nums.size() - 1, nums);
    }
};