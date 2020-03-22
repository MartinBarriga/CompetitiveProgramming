class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> ocurrences;
        unordered_map<char, queue<int>> indexes;
        unordered_set<int> startingPoints;
        int startingIndex = 0; 
        int minLength = INT_MAX, minIndex, minStartingIndex;
        for(int index = 0; index < t.size(); index++){
            if(ocurrences.find(t[index]) == ocurrences.end()){
                ocurrences[t[index]] = 1;
            }
            else{
                ocurrences[t[index]]++;
            }
        }
        int index;
        for(index = 0; index < s.size(); index++){
            char currentLetter = s[index];
            if(ocurrences.find(currentLetter) == ocurrences.end()) continue;
            startingPoints.insert(index);
            if(ocurrences[currentLetter] == 0){
                cout << index << " ";
                indexes[currentLetter].push(index);
                int currentLetterStart = indexes[currentLetter].front();
                indexes[currentLetter].pop();
                startingPoints.erase(currentLetterStart);           
            }
            else{
                ocurrences[currentLetter]--;
                indexes[currentLetter].push(index);
            }
            
            while(startingPoints.find(startingIndex) == startingPoints.end()){
                startingIndex++;
                cout << "newSI: "<< startingIndex << endl;
            }
            if(startingPoints.size() >= t.size() && index - startingIndex + 1 < minLength){
                cout << "entra";
                minLength = index - startingIndex + 1;
                minIndex = index;
                minStartingIndex = startingIndex;
            }
        }
        if(minLength == INT_MAX) return "";
        string answ = "";
        for(minStartingIndex; minStartingIndex <= minIndex; minStartingIndex++){
            answ += s[minStartingIndex];
        }
        return answ;
    }
};