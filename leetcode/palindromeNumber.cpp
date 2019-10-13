class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        int leftSide = x;
        int rightSide = 0;
        int xSize = 0;
        int aux = x;
        while(aux > 0){
            aux/=10;
            xSize++;
        }
        for(int i = 0; i < xSize/2; i++){
            rightSide = rightSide*10 + leftSide%10;
            leftSide = leftSide/10;
        }
        if(xSize %2 == 1) leftSide/=10;
        if(leftSide == rightSide) return true;
        return false;
        
    }
};