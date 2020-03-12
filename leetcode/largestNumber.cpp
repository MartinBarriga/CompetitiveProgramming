class Solution {
public:
    
    int getMax(vector<string>& numbers, int index1, int index2){
        string num1 = numbers[index1] + numbers[index2];
        string num2 = numbers[index2] + numbers[index1];
        for(int index = 0; index < num1.size(); index++){
            if(num1[index] > num2[index]) return index1;
            if(num2[index] > num1[index]) return index2;
        }
        return index1;
        
    }
    
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 0) return "";       
        bool choosedMax = false;
        int max;
        string answ = "";
        vector<string> stringNums;
        vector<bool> selected(nums.size(), false);
        for(int index = 0; index < nums.size(); index++){
            stringNums.push_back(to_string(nums[index]));
        }
        for(int selectedNums = 0; selectedNums < nums.size(); selectedNums++){
            for(int i = 0; i < nums.size(); i++){
                if(selected[i]) continue;
                if(choosedMax){
                    max = getMax(stringNums, i, max);
                }
                else{
                    max = i;
                    choosedMax = true;
                } 
            }
            answ += stringNums[max];
            choosedMax = false;
            selected[max] = true;
        }
        if(answ[0] == '0') answ = "0";
        return answ;
    }
};