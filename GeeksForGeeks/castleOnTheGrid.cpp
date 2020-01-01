int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    queue<pair<int,int>> coordinates;
    queue<int> numOfMovesQueue;
    queue<char> kindOfMoveQueue;
    int x;
    int y;
    int width = grid[0].size();
    int height = grid.size();
    int numOfMoves;
    char kindOfMove;
    coordinates.push(make_pair(startX, startY));
    numOfMovesQueue.push(0);
    kindOfMoveQueue.push(' ');
    while(!coordinates.empty()){
        numOfMoves = numOfMovesQueue.front();
        kindOfMove = kindOfMoveQueue.front();
        pair<int,int> coordinate = coordinates.front();
        coordinates.pop();
        numOfMovesQueue.pop();
        kindOfMoveQueue.pop();
        x = coordinate.first;
        y = coordinate.second;
        if(x == goalX && y== goalY) break;
        if(grid[x][y] == '-') continue;
        grid[x][y] = '-';     
        for(int newX = x +1; newX < height && grid[newX][y] == '.'; newX++){
            coordinates.push(make_pair(newX,y));
            if(kindOfMove == 'u'){
                numOfMovesQueue.push(numOfMoves);
            }
            else{
                numOfMovesQueue.push(numOfMoves+1);
            }
            kindOfMoveQueue.push('u');    
        }   
        for(int newX = x - 1; newX >= 0 && grid[newX][y] == '.'; newX--){
            coordinates.push(make_pair(newX,y));
            if(kindOfMove == 'd'){
                numOfMovesQueue.push(numOfMoves);
            }
            else{
                numOfMovesQueue.push(numOfMoves+1);
            }
            kindOfMoveQueue.push('d');
        }
        for(int newY = y + 1; newY < width && grid[x][newY] == '.'; newY++){
            coordinates.push(make_pair(x,newY));
            if(kindOfMove == 'r'){
                numOfMovesQueue.push(numOfMoves);
            }
            else{
                numOfMovesQueue.push(numOfMoves+1);
            }
            kindOfMoveQueue.push('r');
        }
        for(int newY = y - 1; newY >= 0 && grid[x][newY] == '.'; newY--){
            coordinates.push(make_pair(x,newY));
            if(kindOfMove == 'l'){
                numOfMovesQueue.push(numOfMoves);
            }
            else{
                numOfMovesQueue.push(numOfMoves+1);
            }
            kindOfMoveQueue.push('l');
        }
    }
    return numOfMoves;
}