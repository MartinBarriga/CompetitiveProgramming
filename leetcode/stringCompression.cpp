class Solution {
public:
    void insertIntoVector(vector<char>& chars, int &insertingIndex, int currentTimesRep, char currentChar){
        int numberOfDigits;
        int aux;
        chars[insertingIndex] = currentChar;
        insertingIndex++;
        if(currentTimesRep > 0){
            currentTimesRep++;
            aux = currentTimesRep;
            numberOfDigits = 0;
            while(aux > 0){
                aux /= 10;
                numberOfDigits++;
            }
            aux = numberOfDigits;
            while(currentTimesRep > 0){
                chars[insertingIndex + numberOfDigits - 1] = '0' +(currentTimesRep%10); 
                currentTimesRep /= 10;
                numberOfDigits--;
            }
            insertingIndex += aux;
        }
    }
    
    int compress(vector<char>& chars) {
        if(chars.empty() == true) return 0;
        char currentChar = chars[0];
        int currentTimesRep = 0;
        int insertingIndex = 0;
        for(int currentIndex = 1; currentIndex < chars.size(); currentIndex++){
            if(chars[currentIndex] != currentChar){
                insertIntoVector(chars, insertingIndex, currentTimesRep, currentChar);
                currentChar = chars[currentIndex];
                currentTimesRep = 0;
            }     
            else{
                currentTimesRep++;
            }
        }
        insertIntoVector(chars, insertingIndex, currentTimesRep, currentChar);
        int charSize = chars.size();
        for(insertingIndex; insertingIndex < charSize; insertingIndex++) chars.pop_back();
        return chars.size();
    }
};