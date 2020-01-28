class Solution {
public:
    vector<vector<int>> dp;
    int search(int x, int y, int &width, int &height){
        if(x == width || y == height) return 0;
        if(dp[y][x] == -1){
            if(x == width-1 && y == height-1) dp[y][x] = 1;
            else{ 
                dp[y][x] = search(x+1, y, width, height) + search(x, y+1, width, height);
            }
        }
        return dp[y][x];
        
    }
    int uniquePaths(int m, int n) {
        dp.assign(n, vector<int>(m, -1));
        return search(0, 0, m, n);
    }
};