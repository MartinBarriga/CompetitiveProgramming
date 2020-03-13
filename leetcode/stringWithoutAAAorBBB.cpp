class Solution {
public:
    string strWithout3a3b(int A, int B) {
        string res = "";
        if(A == 0 && B == 0) return "";
        while((A > 1 || B > 1) && A != B && A > 0 && B> 0){
            if(A > B){
                res += "aab";
                A -=2;
                B--;
            }
            else{
                res += "bba";
                B -= 2;
                A--;
            }
        }
        if(B == 0){
            while(A > 0){
                res += "a";
                A--;
            }
        }
        if(A == 0){
            while(B > 0 ){
                res+= "b";
                B--;
            }
        }
        int amount = A;
        while(amount > 0){
            if(res.back() == 'b')
                res+="ab";
            else
                res+="ba";
            amount--;
        }
        return res;
    }
};