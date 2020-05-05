class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> nums;
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            nums.insert(arr[i]);
        }
        for(int i = 0; i < arr.size(); i++){
            if(nums.find(arr[i]+1) != nums.end()){
                sum++;
            }
        }
        return sum;
    }
};