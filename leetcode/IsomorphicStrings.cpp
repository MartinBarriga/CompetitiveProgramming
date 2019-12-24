class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> letters;
        unordered_set<char> TLettersSeen;
        if(s.size() != t.size()) return false;
        for(int index = 0; index < s.size(); index++){
            if(letters.count(s[index]) == 0){
                if(TLettersSeen.count(t[index]) == 0){
                    letters[s[index]] = t[index];
                    TLettersSeen.insert(t[index]);
                }
                else{
                    return false;
                } 
            }
            else{
                if(letters[s[index]] != t[index]) return false;
            }
        }
        return true;
    }
};