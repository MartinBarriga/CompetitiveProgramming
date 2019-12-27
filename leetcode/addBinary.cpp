class Solution {
public:
    string addBinary(string a, string b) {
        int indexA = a.size()-1;
        int indexB = b.size()-1;
        short digitA, digitB, carry = 0;
        string sum = "";
        while(indexA >= 0 || indexB >= 0){
            if(indexA >= 0) digitA = a[indexA] - '0'; 
            else digitA = 0;
            if(indexB >= 0) digitB = b[indexB] - '0';
            else digitB = 0;
            if(digitA + digitB + carry == 0){
                sum.insert(sum.begin(),'0');
            }
            else if(digitA + digitB + carry == 1){
                sum.insert(sum.begin(),'1');
                carry = 0;
            }
            else if(digitA + digitB + carry == 2){
                sum.insert(sum.begin(),'0');
                carry = 1;
            }
            else{
                sum.insert(sum.begin(), '1');
            }
            indexA--;
            indexB--;
        }
        if(carry == 1) sum.insert(sum.begin(), '1');
        return sum;
    }
};