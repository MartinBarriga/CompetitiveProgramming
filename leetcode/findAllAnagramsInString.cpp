class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> letters; 
        vector<int> answ;
        for(int i = 0; i < p.size(); i++){
            if(letters.find(p[i]) == letters.end()){
                letters[p[i]] = 0;
            }
            letters[p[i]]++;
        }
        int start, end, count = 0;
        bool isItFirstTime = true;
        
        for(int i = 0; i < s.size(); i++){
            char letter = s[i];
            if(letters.find(letter) != letters.end() && letters[letter] > 0){
                letters[letter]--;
                if(isItFirstTime){
                    isItFirstTime = false;
                    start = i;
                }
                count++;
                if(count == p.size()){
                    answ.push_back(start);
                    letters[s[start]]++;
                    start++;
                    count--;
                }
            }
            else{
                if(letters.find(letter) != letters.end()){
                    while(s[start] != letter){
                        letters[s[start]]++;
                        start++;
                        count--;
                    }
                    start++;
                }
                else if(!isItFirstTime){
                    count = 0;
                    while(start < i){
                        
                        letters[s[start]]++;
                        start++;
                    }
                    isItFirstTime = true;
                }
            }
        }
        return answ;
    }
};