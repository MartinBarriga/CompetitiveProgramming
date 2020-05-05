class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> availableLetters;
        for(int i = 0; i < magazine.size(); i++){
            if(availableLetters.find(magazine[i]) == availableLetters.end()){
                availableLetters[magazine[i]] = 0;
            }
            availableLetters[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.size(); i++){
            if(availableLetters.find(ransomNote[i]) != availableLetters.end() && availableLetters[ransomNote[i]] > 0){
                availableLetters[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};