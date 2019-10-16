class Solution {
public:
    string countAndSay(int n) {
        string answ = "";
        string newAnsw = "";
        int quantity = 0;
        char number = '1';
        if(n == 0) return answ;
        answ = "1";
        for(int i = 1; i < n; i++){
            quantity = 1;
            number = answ[0];
            for(int index = 1; index < answ.size(); index++){
                if(answ[index] == number) quantity++;
                else{
                    newAnsw+= to_string(quantity) + number;
                    quantity = 1;
                    number = answ[index];
                }
            }
            newAnsw+= to_string(quantity) + number;
            answ = newAnsw;
            newAnsw = "";
        }
        return answ;
        
    }
};