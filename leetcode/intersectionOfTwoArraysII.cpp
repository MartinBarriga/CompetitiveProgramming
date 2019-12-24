class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums1Map;
        vector<int> intersection;
        int index;
        for(index = 0; index < nums1.size(); index++){
            int currentNum = nums1[index];
            if(nums1Map.count(currentNum) == 0){
                nums1Map[currentNum] = 1;
            }
            else{
                nums1Map[currentNum]++;
            }
        }
        for(index = 0; index < nums2.size(); index++){
            int currentNum = nums2[index];
            if(nums1Map.count(currentNum) == 1 && nums1Map[currentNum] > 0){
                nums1Map[currentNum]--;
                intersection.push_back(currentNum);
            }
        }
        return intersection;
    }
};