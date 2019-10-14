class Solution {
public: //R R L L 
    int balancedStringSplit(string s) {
        int numberOfR = 0;
        int numberOfL = 0;
        int numberOfSplitted = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R') numberOfR++;
            else numberOfL++;
            if(numberOfR == numberOfL){
                numberOfSplitted++;
                numberOfR = 0;
                numberOfL = 0;
            }
        }  
        return numberOfSplitted;
    }
};