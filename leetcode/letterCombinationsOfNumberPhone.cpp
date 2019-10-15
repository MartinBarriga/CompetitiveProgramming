class Solution {
public:
    void recursion(vector<string> &answ, string currentString, int currentIndex, string digits){
        if(currentIndex == digits.size()) {
            answ.push_back(currentString);
            return;
        }
        if(digits[currentIndex] == '0'){
            recursion(answ, currentString + " ", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '1'){
            recursion(answ, currentString, currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '2'){
            recursion(answ, currentString + "a", currentIndex+1, digits);
            recursion(answ, currentString + "b", currentIndex+1, digits);
            recursion(answ, currentString + "c", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '3'){
            recursion(answ, currentString + "d", currentIndex+1, digits);
            recursion(answ, currentString + "e", currentIndex+1, digits);
            recursion(answ, currentString + "f", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '4'){
            recursion(answ, currentString + "g", currentIndex+1, digits);
            recursion(answ, currentString + "h", currentIndex+1, digits);
            recursion(answ, currentString + "i", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '5'){
            recursion(answ, currentString + "j", currentIndex+1, digits);
            recursion(answ, currentString + "k", currentIndex+1, digits);
            recursion(answ, currentString + "l", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '6'){
            recursion(answ, currentString + "m", currentIndex+1, digits);
            recursion(answ, currentString + "n", currentIndex+1, digits);
            recursion(answ, currentString + "o", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '7'){
            recursion(answ, currentString + "p", currentIndex+1, digits);
            recursion(answ, currentString + "q", currentIndex+1, digits);
            recursion(answ, currentString + "r", currentIndex+1, digits);
            recursion(answ, currentString + "s", currentIndex+1, digits);
        }
        else if(digits[currentIndex] == '8'){
            recursion(answ, currentString + "t", currentIndex+1, digits);
            recursion(answ, currentString + "u", currentIndex+1, digits);
            recursion(answ, currentString + "v", currentIndex+1, digits);
        }
        else {
            recursion(answ, currentString + "w", currentIndex+1, digits);
            recursion(answ, currentString + "x", currentIndex+1, digits);
            recursion(answ, currentString + "y", currentIndex+1, digits);
            recursion(answ, currentString + "z", currentIndex+1, digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> answ;
        
        if(digits.empty() == false) recursion(answ, "", 0, digits);    
        return answ;
    }
};