class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> column[9];
        unordered_set<char> square[9];
        int squareIndex;
        for(int rowIndex = 0; rowIndex < 9; rowIndex++){
            for(int columnIndex = 0; columnIndex < 9; columnIndex++){
                squareIndex = rowIndex/3*3 + columnIndex/3;
                char currentChar = board[rowIndex][columnIndex];
                if(currentChar == '.') continue;
                if(square[squareIndex].count(currentChar) == 0){
                    square[squareIndex].insert(currentChar);
                }
                else{
                    return false;
                }
                if(row[rowIndex].count(currentChar) == 0){
                    row[rowIndex].insert(currentChar);
                }
                else{
                    return false;
                }
                if(column[columnIndex].count(currentChar) == 0){
                    column[columnIndex].insert(currentChar);
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};