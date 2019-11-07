class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int currentLastIndex = nums1.size()-1;
        int currentNums1Index = m-1;
        int currentNums2Index = n-1;
        while(currentNums1Index >= 0 && currentNums2Index >= 0){
            if(nums1[currentNums1Index] > nums2[currentNums2Index]){
                nums1[currentLastIndex] = nums1[currentNums1Index];
                currentLastIndex--;
                currentNums1Index--;
            }
            else{
                nums1[currentLastIndex] = nums2[currentNums2Index];
                currentLastIndex--;
                currentNums2Index--;
            }
        }
        while(currentNums2Index >= 0){
            nums1[currentLastIndex] = nums2[currentNums2Index];
            currentNums2Index--;
            currentLastIndex--;
        }
    }
};