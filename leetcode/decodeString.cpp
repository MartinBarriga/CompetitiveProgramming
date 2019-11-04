class Solution {
public:
    string decodeString(string s) {
        string decoded = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0'&& s[i] <= '9'){
                string stringOfNumberOfTimesRep = "";
                while(s[i]>='0' && s[i] <='9'){
                    stringOfNumberOfTimesRep += s[i];
                    i++;
                }
                string stringInBrackets = "";
                i++;
                int openBrackets = 1;
                int closeBrackets = 0;
                while(openBrackets != closeBrackets){
                    stringInBrackets += s[i];
                    if(s[i] == ']') closeBrackets++;
                    if(s[i] == '[') openBrackets++;
                    i++;
                }
                i--;
                stringInBrackets.pop_back();
                string stringInBracketsDecoded = decodeString(stringInBrackets); 
                for(int j = 0; j < stoi(stringOfNumberOfTimesRep); j++){
                    decoded += stringInBracketsDecoded;
                }
            }
            else{
               decoded += s[i]; 
            }
        }
        return decoded;
    }
};