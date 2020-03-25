class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        unordered_map<string, unordered_set<string>> similarities;
        if(words1.size() != words2.size()) return false;
        for(int index = 0; index < pairs.size(); index++){
            string firstWord = pairs[index][0];
            string secondWord = pairs[index][1];
            if(similarities.find(firstWord) == similarities.end()){
                similarities[firstWord] = unordered_set<string>();
            }
            similarities[firstWord].insert(secondWord);
        }
        for(int index = 0; index < words1.size(); index++){
            string word1 = words1[index];
            string word2 = words2[index];
            if(word1.compare(word2) == 0 || (similarities.find(word1) != similarities.end() && similarities[word1].find(word2) != similarities[word1].end()) || (similarities.find(word2) != similarities.end() && similarities[word2].find(word1) != similarities[word2].end())){
                continue;
            }
            return false;
        }
        return true;
    }
};