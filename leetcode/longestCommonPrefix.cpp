class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonPrefix = "";
        if(strs.size() == 0) return "";
        for(int charIndex = 0; charIndex < strs[0].size(); charIndex++) {
            char firstWordChar = strs[0][charIndex];
            for(int word = 0; word < strs.size(); word++) {
                if(strs[word].size() == charIndex) return commonPrefix;
                char currentWordChar = strs[word][charIndex];
                if(currentWordChar != firstWordChar) {
                    return commonPrefix;
                }
            }
            commonPrefix.push_back(firstWordChar);
        }
        return commonPrefix;
        
    }
};