class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> original;
        unordered_map<char, int> letters;
        for(int i = 0; i < s1.size(); i++){
            if(original.find(s1[i]) == original.end()){
                original[s1[i]] = 1;
            }
            else{
                original[s1[i]]++;
            }
        }
        letters = original;
        int numberOfOccurrences = 0;
        int start;
        bool lastWasReset = true;
        for(int i = 0; i < s2.size(); i++){
            char currentLetter = s2[i];
            if(letters.find(currentLetter) != letters.end() && letters[currentLetter] > 0){
                letters[currentLetter]--;
                numberOfOccurrences++;
                if(lastWasReset){
                    start = i;
                    lastWasReset = false;
                }
            }
            else{
                if(letters.find(currentLetter) != letters.end()){
                    while(s2[start] != currentLetter){
                        letters[s2[start]]++;
                        start++;
                        numberOfOccurrences--;
                    }
                    start++;
                   
                }
                else{
                    letters = original;
                    numberOfOccurrences = 0;
                    lastWasReset = true;
                }
                
            }
            if(numberOfOccurrences == s1.size()) return true;
        }
        return false;
    }
};