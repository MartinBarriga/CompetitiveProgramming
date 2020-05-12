class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1, mid;
        while(l<r){
            mid = l + (r-l)/2;

            if((mid == 0 || nums[mid] != nums[mid-1]) && (mid == nums.size()-1 || nums[mid] != nums[mid+1])) return nums[mid];
            if(mid%2 == 1){
                if(nums[mid-1] != nums[mid]) {
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(mid - 1 >= 0 && nums[mid-1] == nums[mid]){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }   
            }
        }
        return nums[l];
    }
};