//O(n) memory 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> numSet;
        for(int i = 0; i < nums.size(); i++){
            if(numSet.find(nums[i]) == numSet.end()){
                numSet.insert(nums[i]);
            }
            else{
                numSet.erase(nums[i]);
            }
        }
        auto it = numSet.begin();
        int uniqueNumber = *it;
        return uniqueNumber;
    }
};
//O(1) memory
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); i++){
            num = num xor nums[i];
        }
        return num;
    }
};