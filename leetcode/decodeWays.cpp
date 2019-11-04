class Solution {
public:
    vector<int> dpArray = vector<int>(10001, -1);
    int traverse(int index, string& s){
        if(dpArray[index] == -1){
            if(index >= s.size()) dpArray[index] = 1;
            else{
                int twoDigitsNumOfDec = 0;
                int oneDigitNumOfDec = 0;
                if(index+1 < s.size() && ((s[index] == '1') || (s[index] == '2' && s[index+1] <='6'))){
                    twoDigitsNumOfDec = traverse(index+2, s);
                }
                if(s[index]>='1'){
                    oneDigitNumOfDec = traverse(index+1, s);
                }
                dpArray[index] = twoDigitsNumOfDec + oneDigitNumOfDec;
            }
        }
        return dpArray[index];
    }
    int numDecodings(string s) {
        return traverse(0, s);    
    }
};
