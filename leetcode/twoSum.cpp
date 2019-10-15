class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> foundValues;
        int numberINeedToSum;
        vector<int> answ(2, -1);
        for(int i = 0; i < nums.size(); i++){
            numberINeedToSum = target- nums[i];
            if(foundValues.find(numberINeedToSum) != foundValues.end()){
                answ[0] = foundValues[numberINeedToSum];
                answ[1] = i;
                return answ;
            }
            else{
                foundValues[nums[i]] = i;
            }
        }   
        return answ;
    }
};