class Solution {
public:
    bool isAlphanumeric(char letter) {
        if((letter >= '0' && letter <= '9') || (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
            return true;
        }
        return false;
    }
    bool areEqual(char leftLetter, char rightLetter) {
        if(leftLetter >= 'A' && leftLetter <= 'Z') {
            leftLetter += 'a' - 'A';
        }
        if(rightLetter >= 'A' && rightLetter <= 'Z') {
            rightLetter += 'a' - 'A';
        }
        if(leftLetter == rightLetter) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int left = 0; 
        int right = s.size()-1;
        while(left < right) {
            if(isAlphanumeric(s[left]) && isAlphanumeric(s[right])) {
                if(!areEqual(s[left], s[right])) {
                    return false;
                }
                left++;
                right--;
            }
            else {
                if(!isAlphanumeric(s[left])) {
                    left++;
                }
                if(!isAlphanumeric(s[right])) {
                    right--;
                }
            }
        }
        return true;
    }
};