class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> letters(27, 0);
        int currentLetter;
        for(int i = 0; i < s.size(); i++) {
            currentLetter = s[i];
            if(letters[currentLetter - 'a'] < 2) {
                letters[currentLetter - 'a']++;   
            }
        }
        
        for(int i = 0; i < s.size(); i++) {
            currentLetter = s[i];
            if(letters[currentLetter - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};