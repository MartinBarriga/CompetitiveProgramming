class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> numbers;
        vector<int> answ;
        for(int index = 0; index < nums.size(); index++){
            while(!numbers.empty() && (numbers.back() <= index - k  || nums[numbers.back()] <= nums[index])){
                numbers.pop_back();
            }
            numbers.push_back(index);
            while(numbers.front() <= index - k){
                numbers.pop_front();
            }
            if(index+1 >= k) answ.push_back(nums[numbers.front()]);
        } 
        return answ;
    }
};