class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string> > groupOfWords;
        string currentWord;
        for(int index = 0; index  < strings.size(); index++){
            currentWord = strings[index];
            string currentWordDifference;
            for(int currentWordIndex = 1; currentWordIndex < currentWord.size(); currentWordIndex++){
                int difference;
                if(currentWord[currentWordIndex] - currentWord[currentWordIndex-1] < 0){
                    difference = 26 + currentWord[currentWordIndex] - currentWord[currentWordIndex-1];
                }
                else{
                    difference = currentWord[currentWordIndex] - currentWord[currentWordIndex-1];
                }
                currentWordDifference += to_string(difference) + ",";
            }
            if(groupOfWords.count(currentWordDifference) == 0){
                vector<string> similarWords;
                similarWords.push_back(currentWord);
                groupOfWords[currentWordDifference] =similarWords;
            }
            else{
                groupOfWords[currentWordDifference].push_back(currentWord);
            }
        } 
        vector<vector<string>> Answ;
        for(auto it = groupOfWords.begin(); it != groupOfWords.end(); it++){
            Answ.push_back(it->second);
        }
        return Answ;
    }
};