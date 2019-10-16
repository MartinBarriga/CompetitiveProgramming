class Solution {
public:
    int myAtoi(string str) {
        int index = 0;
        int number = 0;
        bool isItPositive = true;
        if(str == "") return 0;
        while(str[index] == ' ' && index < str.size()) index++;
        if(index < str.size() && str[index] == '+'){
            index++;
        }
        else if(str[index] == '-'){
            isItPositive = false;
            index++;
        }
        while(index < str.size() && (str[index]>= '0' && str[index] <= '9')){
            int newDigit = str[index] - '0';
            if(isItPositive == true){
                if(number > INT_MAX/10){
                    return INT_MAX;
                }
                if(number == INT_MAX/10){
                    if(newDigit >= INT_MAX %10){
                        return INT_MAX;
                    }
                    number = number*10 + newDigit;
                }
                else{
                    number = number*10 + newDigit;
                }
            } 
            else{
                int negNumber = number * -1;
                if(negNumber < INT_MIN/10){
                    return INT_MIN;
                }
                if(negNumber == INT_MIN/10){
                    if((newDigit*-1) <= INT_MIN%10){
                        return INT_MIN;
                    }
                    number = number*10 + newDigit;
                } 
                else{
                    number = number*10 + newDigit;
                }
            }
            index++;
        }
        if(isItPositive == false) number*=-1;
        return number;
    }
};