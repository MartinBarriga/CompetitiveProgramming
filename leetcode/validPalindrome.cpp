class Solution {
public:
    bool isAlphanumeric(char character){
        if((character >= '0' && character <= '9') || (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            if(isAlphanumeric(s[left]) == true && isAlphanumeric(s[right]) == true){
                if(s[left]>='A' && s[left] <= 'Z'){
                    s[left] += ('a'-'A'); 
                }
                if(s[right]>='A' && s[right] <= 'Z'){
                    s[right] += ('a'-'A'); 
                }
                if(s[left] == s[right]){
                    left++;
                    right--;
                }
                else{
                    return false;
                }
            }
            else{
                if(isAlphanumeric(s[left]) == false){
                    left++; 
                }
                if(isAlphanumeric(s[right]) == false){
                    right--;
                }
            }
        } 
        return true;
    }
};