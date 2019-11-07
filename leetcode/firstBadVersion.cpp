// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int mid;
        while(left <= right){
            mid = left + (right-left)/2;
            if(isBadVersion(mid) && (mid == 1 || !isBadVersion(mid-1))){
                break;
            }
            if(isBadVersion(mid)){
                right = mid-1;
            }
            else{
                left = mid +1;
            }
        }
        return mid;
    }
};