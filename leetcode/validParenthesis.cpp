class Solution {
public:
    
    bool isValid(string s) {
        stack<char> openBrackets;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                openBrackets.push(s[i]);
            }
            else{
                if(openBrackets.empty() == true){
                    return false;
                }
                if( (openBrackets.top() != '(' && s[i] == ')') || (openBrackets.top() != '{' && s[i] == '}') || (openBrackets.top() != '[' && s[i] == ']')) {
                    return false;
                }
                else{
                    openBrackets.pop();
                }
            }
        }
        if(openBrackets.empty() == true) {
            return true;
        }
        return false;
    }
};