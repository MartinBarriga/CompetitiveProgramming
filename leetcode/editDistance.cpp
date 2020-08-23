class Solution {
public:
    vector<vector<int> > dp;
    int convert(string &word1, string &word2, int word1Index, int word2Index) {
        if(dp[word1Index][word2Index] == -1){
            if(word2Index == word2.size()){
                dp[word1Index][word2Index] = word1.size() - word1Index;
            }
            else if(word1Index == word1.size()) {
                dp[word1Index][word2Index] = word2.size() - word2Index;
            }

            else if(word1[word1Index] == word2[word2Index]) {
                dp[word1Index][word2Index] = convert(word1, word2, word1Index + 1, word2Index + 1);
            }
            else {
                //replace
                int replace = convert(word1, word2, word1Index + 1, word2Index + 1);
                //insert
                int insert = convert(word1, word2, word1Index, word2Index + 1);
                //remove
                int remove = convert(word1, word2, word1Index + 1, word2Index);
                dp[word1Index][word2Index] = min(min(replace, insert), remove) + 1;
            }
        }
        return dp[word1Index][word2Index];
        
    }
    int minDistance(string word1, string word2) {
        dp.assign(1000, vector(1000, -1));
        return convert(word1, word2, 0, 0);
    }
};