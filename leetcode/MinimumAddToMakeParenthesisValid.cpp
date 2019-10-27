class Solution {
public:
    int minAddToMakeValid(string S) {
        int numberOfNewParentheses = 0;
        int balance = 0;
        for(int i = 0; i < S.size(); i++){
            if(S[i] == '(') balance++;
            else{
                if(balance == 0) numberOfNewParentheses++;
                else balance--;
            }
        }
        if(balance > 0) numberOfNewParentheses += balance;
        return numberOfNewParentheses;
    }
};