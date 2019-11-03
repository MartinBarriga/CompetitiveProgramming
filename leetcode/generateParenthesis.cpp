class Solution {
public:
    void traverse(int numOfOpenB, int numOfClosingB, string currentCombination, int n,  vector<string>&Solution){
        if(currentCombination.size() == n*2){
            Solution.push_back(currentCombination);
        }
        else{
            if(numOfOpenB < n){
                traverse(numOfOpenB+1, numOfClosingB, currentCombination+"(", n, Solution);
            }
            if(numOfClosingB < numOfOpenB){
                traverse(numOfOpenB, numOfClosingB+1, currentCombination+")", n, Solution);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> Solution;
        traverse(0,0,"", n, Solution);
        return Solution;
    }
    
};