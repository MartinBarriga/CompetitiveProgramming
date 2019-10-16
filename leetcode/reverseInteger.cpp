class Solution {
public:
    int reverse(int x) {
        int invertedX = 0;
        while(x != 0){
            if(invertedX > INT_MAX/10 || invertedX < INT_MIN/10) return 0;
            if(invertedX == INT_MAX/10 || invertedX == INT_MAX/10){
                if( (x> 0 && INT_MAX%10 >= x%10) || (x<0 && INT_MIN%10 <= x%10)){
                    invertedX = invertedX*10 + x%10;
                    x/=10;
                }
                else{ 
                    return 0;
                }
            }
            else{
                invertedX = invertedX*10 + x%10;
                x/=10;
            }
        }
        return invertedX;
    }
};