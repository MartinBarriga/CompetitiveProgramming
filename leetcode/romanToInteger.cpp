class Solution {
public:
    int getVal(char num){
        if(num == 'I') return 1;
        if(num == 'V') return 5;
        if(num == 'X') return 10;
        if(num == 'L') return 50;
        if(num == 'C') return 100;
        if(num == 'D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int number = 0;
        for(int i = 0; i < s.size(); i++){
            if(i+1 < s.size() && ((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) || (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) || (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')))){
                int first = getVal(s[i]);
                int sec = getVal(s[i+1]);
                number += sec - first;
                i++;
            }
            else{
                number += getVal(s[i]);
            }
        }
        return number;
    }
};