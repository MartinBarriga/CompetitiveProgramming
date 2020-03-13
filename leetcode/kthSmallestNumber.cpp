class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix.size() == 0);
        int colSize = matrix[0].size();
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> numbers;
        for(int row = 0; row < matrix.size(); row++){
            numbers.push(make_pair(matrix[row][0], make_pair(row, 0)));
        }
        while(k > 1){
            int row = numbers.top().second.first;
            int col = numbers.top().second.second;
            numbers.pop();
            if(col + 1 < colSize){
                numbers.push(make_pair(matrix[row][col+1], make_pair(row, col+1)));
            }
            k--;
        }
        return numbers.top().first;
    }
};