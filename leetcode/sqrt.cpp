class Solution {
public:
    int mySqrt(int x) {
        //46340
        int left = 0;
        int right = 46340;
        int mid;
        while(left <= right){
            mid = (left + right)/2;
            if(mid*mid > x){
                right = mid-1;
            }
            else{
                if(mid*mid == x || mid == 46340 ||(mid+1)*(mid+1) > x) return mid;
                left = mid+1;
            }
        }
        return mid;
    }
};