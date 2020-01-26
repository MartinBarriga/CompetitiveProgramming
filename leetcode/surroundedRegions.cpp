class Solution {
public:
    
    vector<pair<int,int>> markedCells;
    bool surround(vector<vector<char>>& board, int y, int x, int &width, int &height){
        if(board[y][x] == 'X') return true;
        if(x == 0 || x == width-1 || y == 0 || y == height-1) {
            return false;
        }
        board[y][x] = 'X';
        pair<int,int> newMarkedCell;
        newMarkedCell.first = y;
        newMarkedCell.second = x;
        markedCells.push_back(newMarkedCell);
        if(surround(board, y, x+1, width, height) && surround(board, y, x-1, width, height) && surround(board, y+1, x, width, height) && surround(board, y-1, x, width, height)){
            return true;
        }
        for(int index = 0; index < markedCells.size(); index++){
            int savedY = markedCells[index].first;
            int savedX = markedCells[index].second;
            board[savedY][savedX] = 'O';
        }
        markedCells.clear();
        return false;
    }
    void solve(vector<vector<char>>& board) {     
        if(board.size() == 0) return;
        int height = board.size();
        int width = board[0].size();
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                surround(board, i, j, width, height);
                markedCells.clear();
            }
        }    
    }
};