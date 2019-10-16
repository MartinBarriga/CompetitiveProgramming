class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> repeatedTimes(26,0);
        for(int i = 0; i < s.size(); i++){
            repeatedTimes[s[i]-'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            repeatedTimes[t[i]-'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(repeatedTimes[i] != 0){
                return false;
            }
        }
        return true;
    }
};