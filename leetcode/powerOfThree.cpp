class Solution {
public:
    bool isPowerOfThree(int n) {
        if(fmod(log10(n)/log10(3), 1)==0){
            return true;
        }
        return false;
         
    }
};
