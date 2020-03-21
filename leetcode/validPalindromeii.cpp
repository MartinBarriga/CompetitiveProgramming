class Solution {
public:
    bool checkIfIsPalindrome(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            if(s[left] != s[right]){
                if(checkIfIsPalindrome(s, left+1, right)) return true;
                if(checkIfIsPalindrome(s, left, right-1)) return true;
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};