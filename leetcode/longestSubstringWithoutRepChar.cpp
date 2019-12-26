class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int startingIndex = 0;
        unordered_map<char, int> seenChars;
        int maxSize = 0;
        int index;
        for(index = 0; index < s.size(); index++){
            char currentChar = s[index];
            if(seenChars.count(currentChar) == 0){
                seenChars[currentChar] = index;
            }
            else{
                if(seenChars[currentChar] >= startingIndex){
                    if(maxSize < index - startingIndex) maxSize = index - startingIndex;
                    startingIndex = seenChars[currentChar]+1;
                }
                seenChars[currentChar] = index;
            }
        }
        if(maxSize < index - startingIndex) maxSize = index - startingIndex;
        return maxSize;
    }
};