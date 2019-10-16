class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> letters;
        for(int i = 0; i < s.size(); i++){
            if(letters.find(s[i]) == letters.end()){
                letters[s[i]] = 0;
            }
            else{
                letters[s[i]]++;
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(letters[s[i]] == 0) return i;
        }
        return -1;
    }
};
