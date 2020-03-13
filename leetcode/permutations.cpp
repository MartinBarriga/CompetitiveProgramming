class Solution {
public:
    vector<vector<int>> permutations;
    
    void getPermutations(int amountOfMarkedNums, vector<int>&nums, vector<bool> availableNums, vector<int> newPermutation){
        if(amountOfMarkedNums == nums.size()){
            permutations.push_back(newPermutation);
        }
        else{
            for(int index = 0; index < nums.size(); index++){
                if(availableNums[index]){
                    availableNums[index] = false;
                    newPermutation.push_back(nums[index]);
                    getPermutations(amountOfMarkedNums+1, nums, availableNums, newPermutation);
                    availableNums[index] = true;
                    newPermutation.pop_back();
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> availableNums(nums.size(), true);
        vector<int> newPermutation;
        getPermutations(0, nums, availableNums, newPermutation);
        return permutations;
    }
};