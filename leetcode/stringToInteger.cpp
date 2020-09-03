class Solution {
public:
    int myAtoi(string str) {
        int index = 0;
        int converted = 0;
        int sign = 1;
        while(index < str.size() && str[index] == ' ') {
            index++;
        }
        if(index == str.size()) {
            return 0;
        }
        if(str[index] == '+' || str[index] == '-') {
            if(str[index] == '-') {
                sign = -1;
            }
            index++;
        }
        char currentNum = str[index];
        while(index < str.size() && currentNum >= '0' && currentNum <= '9') {
            if((sign > 0 && (INT_MAX - (currentNum - '0')*sign)/10 >= converted ) || 
               (sign < 0 && (INT_MIN - (currentNum - '0')*sign)/10 <= converted)) {
                converted = converted*10 + (currentNum - '0')*sign;
            }
            else {
                if(sign > 0) {
                    return INT_MAX;
                }
                return INT_MIN;
            }
            index++;
            currentNum = str[index];
        }
        return converted;
    }
};