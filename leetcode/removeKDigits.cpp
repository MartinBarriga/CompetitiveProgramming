class Solution {
public:
    string removeKdigits(string num, int k) {
        deque<char> filteredNums;
        for(int i = 0; i < num.size(); ++i){
            while(k > 0 && !filteredNums.empty() && filteredNums.back() > num[i]){
                    filteredNums.pop_back();
                    k--;
            }
            filteredNums.push_back(num[i]);
        }
        
        while(!filteredNums.empty() && filteredNums.front() == '0'){
            filteredNums.pop_front();
        }
        num.clear();
        
        while(k > 0 && !filteredNums.empty()){
            k--;
            filteredNums.pop_back();
        }
        
        while(!filteredNums.empty()){
            if(k > 0 && !num.empty() && filteredNums.front() == num.back()){
                k--;
            }
            else{
                num.push_back(filteredNums.front());
            }
            filteredNums.pop_front();
        }
        
        
        if(num.empty()) num = "0";
        return num;
    }
};