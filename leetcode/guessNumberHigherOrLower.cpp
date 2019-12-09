// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n;
        int mid;
        int guessResult;
        while(left <= right){
            mid = left + (right-left)/2;
            guessResult = guess(mid);
            if(guessResult == 0) return mid;
            if(guessResult == 1){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return mid;
    }
};