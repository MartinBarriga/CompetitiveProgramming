// Complete the minimumMoves function below.
int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    queue<pair<int,int>> coordinates;
    queue<int> movements;
    int x;
    int y;
    int width = grid[0].size();
    int height = grid.size();
    int numOfMoves;
    coordinates.push(make_pair(startX, startY));
    movements.push(0);
    while(!coordinates.empty()){
        numOfMoves = movements.front();
        pair<int,int> coordinate = coordinates.front();
        coordinates.pop();
        movements.pop();
        x = coordinate.first;
        y = coordinate.second;
        if(x == goalX && y== goalY) break;
        if(grid[y][x] == '-') continue;
        grid[y][x] = '-';        
        if(x + 1 < width && grid[y][x+1] == '.'){
            coordinates.push(make_pair(x+1,y));
            movements.push(numOfMoves+1);
        }
        if(x - 1 >= 0 && grid[y][x-1] == '.'){
            coordinates.push(make_pair(x-1,y));
            movements.push(numOfMoves+1);
        }
        if(y + 1 < height && grid[y+1][x] == '.'){
            coordinates.push(make_pair(x,y+1));
            movements.push(numOfMoves+1);
        }
        if(y - 1 >= 0 && grid[y-1][x] == '.'){
            coordinates.push(make_pair(x,y-1));
            movements.push(numOfMoves+1);
        }
    }
    return numOfMoves;
}