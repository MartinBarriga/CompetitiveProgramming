class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        int currentNumber;
        int lastNumber;
        for(int index = 1; index < A.size(); index++){
            currentNumber = A[index];
            lastNumber = A[index-1];
            if(lastNumber < currentNumber){
                isDecreasing = false;  
            }
            if(lastNumber > currentNumber){
                isIncreasing = false;
            }
            if(!isIncreasing && !isDecreasing) return false;
        }
        return true;
    }
};