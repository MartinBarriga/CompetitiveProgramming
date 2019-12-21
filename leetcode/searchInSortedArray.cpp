class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        int greaterNumIndex;
        int rotatedMid;
        while(left <= right){
            mid = left + (right-left)/2;
            if(mid == nums.size()-1 || nums[mid] > nums[mid+1] ){
                break;                
            }
            else if(nums[mid] < nums[left]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        left = 0;
        right = nums.size()-1;
        greaterNumIndex = mid+1;
        while(left <= right){
            mid = left + (right-left)/2;
            rotatedMid = mid + greaterNumIndex;
            if(rotatedMid >= nums.size() ) rotatedMid -= nums.size();
            if(nums[rotatedMid] == target) return rotatedMid;
            else if(nums[rotatedMid] < target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
    }
};