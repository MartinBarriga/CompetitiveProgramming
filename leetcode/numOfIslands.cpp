class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int numberOfIslands = 0;
        stack<pair<int,int>> positions;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    numberOfIslands++;
                    pair<int,int> currentPos(i,j);
                    positions.push(currentPos);
                    while(!positions.empty()){
                        currentPos = positions.top();
                        positions.pop();
                        grid[currentPos.first][currentPos.second] = 'x';
                        pair<int,int> newPos;
                        if(currentPos.first + 1 < grid.size() && grid[currentPos.first+1][currentPos.second] == '1'){
                            newPos.first = currentPos.first+1;
                            newPos.second = currentPos.second;
                            positions.push(newPos);
                        }
                        if(currentPos.first - 1 >= 0 && grid[currentPos.first-1][currentPos.second] == '1'){
                            newPos.first = currentPos.first-1;
                            newPos.second = currentPos.second;
                            positions.push(newPos);
                        }
                        if(currentPos.second + 1 < grid[currentPos.first].size() && grid[currentPos.first][currentPos.second+1] == '1'){
                            newPos.first = currentPos.first;
                            newPos.second = currentPos.second+1;
                            positions.push(newPos);
                        }
                        if(currentPos.second - 1 >= 0 && grid[currentPos.first][currentPos.second-1] == '1'){
                            newPos.first = currentPos.first;
                            newPos.second = currentPos.second-1;
                            positions.push(newPos);
                        }
                    }
                }
            }
        }
        return numberOfIslands;
    }
};