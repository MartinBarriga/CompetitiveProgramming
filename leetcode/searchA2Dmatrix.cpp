class Solution {
public:
    int firstBS(vector<vector<int>>& matrix, int& target){
        int l = 0;
        int r = matrix.size()-1;
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(matrix[mid][0] > target){
                r = mid-1;
            }
            else{
                if(mid == matrix.size()-1 || matrix[mid+1][0] > target) return mid;
                l = mid+1;
            }
        }
        return -1;
    }
    
    int secondBS(int& row, vector<vector<int>>& matrix, int& target){
        int l = 0;
        int r = matrix[row].size()-1;
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(matrix[row][mid] > target){
                r = mid-1;
            }
            else{
                if(matrix[row][mid] == target) return mid;
                l = mid+1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row, column;
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        row = firstBS(matrix, target); 
        cout << row << endl;
        if(row == -1) return false;
        column = secondBS(row, matrix, target); 
        cout << column << endl;
        if(column == -1) return false;
        return true;
    }
};