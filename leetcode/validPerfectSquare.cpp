class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num <= 1) return true;
        int l = 2, r = num/2, mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(mid > sqrt(INT_MAX) || mid*mid > num){
                r = mid-1;
            }
            else if(mid*mid < num){
                l = mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};