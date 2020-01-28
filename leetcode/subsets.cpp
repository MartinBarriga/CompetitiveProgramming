class Solution {
public:
    vector<vector<int>> solution;
    
    void subsets(int index, vector<int> currentSet, vector<int>& availableNums){
        if(index == availableNums.size()) return; 
        subsets(index+1, currentSet, availableNums);
        currentSet.push_back(availableNums[index]);
        subsets(index+1, currentSet, availableNums);
        solution.push_back(currentSet);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> currentSet;
        subsets(0, currentSet, nums);
        solution.push_back(currentSet);        
        return solution;
    }
};