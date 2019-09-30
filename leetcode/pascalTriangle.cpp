class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>rowValues;
        vector<vector<int > > solution;
        if(numRows == 0){
            return solution;
        } 
        rowValues.push_back(1);
        solution.push_back(rowValues);
        if(numRows == 1){    
            return solution;
        }
        for(int i = 1; i < numRows; i++){
            rowValues.assign(i+1, 0);
            rowValues[0] = 1;
            rowValues[i] = 1;
            for(int j = 1; j < i; j++){
                rowValues[j] = solution[i-1][j] + solution[i-1][j-1];
            }
            solution.push_back(rowValues);
        }
        return solution;
        
    }
};