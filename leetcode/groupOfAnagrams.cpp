class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seenStrings;
        string keyString;
        for(int index = 0; index < strs.size(); index++){
            keyString = strs[index];
            sort(keyString.begin(), keyString.end());
            if(seenStrings.count(keyString) == 0){
                vector<string> anagrams;
                anagrams.push_back(strs[index]);
                seenStrings[keyString] = anagrams;
            }
            else{
                seenStrings[keyString].push_back(strs[index]);
            }
        }
        vector<vector<string>> anagramsVector;
        for(auto it = seenStrings.begin(); it != seenStrings.end(); it++){
            anagramsVector.push_back((it->second));
        }
        return anagramsVector;
    }
};