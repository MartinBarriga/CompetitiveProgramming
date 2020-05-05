class Solution {
public:
    int findComplement(int num) {
        //if(num == 0) return 1;
        int value = 1;
        int newNum = 0;
        vector<int> binary;
        while(num > 0){
            binary.push_back(num%2);
            num /= 2;
        }
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == 0) newNum += value;
            if(i + 1 < binary.size())value*=2;
        }
        return newNum;
    }
};