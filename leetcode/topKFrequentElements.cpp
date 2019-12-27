class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seenNums;
        map<int,vector<int>> orderedSeenNums;
        int currentNum;
        for(int index = 0; index < nums.size(); index++){
            currentNum = nums[index];
            if(seenNums.count(currentNum) == 1){
                seenNums[currentNum]++; 
            }
            else{
                seenNums[currentNum] = 0;
            }
        }
        for(auto it = seenNums.begin(); it != seenNums.end(); it++){
            int number = it->first;
            int timesAppeared = it->second;
            if(orderedSeenNums.count(timesAppeared) == 0){
                vector<int> arrayOfNums;
                arrayOfNums.push_back(number);
                orderedSeenNums[timesAppeared] = arrayOfNums;
            }
            else{
                orderedSeenNums[timesAppeared].push_back(number);
            }
        }
        auto it = orderedSeenNums.end();
        it--;
        int index;
        vector<int> answ;
        while(k > 0){
            index = 0;
            vector<int> arrayOfNums = it->second;
            for(int i = 0; i < arrayOfNums.size(); i++){
                answ.push_back(arrayOfNums[i]);
                k--;
                if(k == 0) break;
            }
            it--;
        }
        return answ;
    }
};