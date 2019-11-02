class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size();
        int middle = (totalSize-1)/2;
        int numberOfMiddlesMissing;
        int first = 0;
        int second = 0;
        int realIndex = 0;
        double middleSum = 0;
        int poppedOutNum;
        if(totalSize%2==0) numberOfMiddlesMissing = 2;
        else numberOfMiddlesMissing = 1;
        while(numberOfMiddlesMissing > 0){
            if(first < nums1.size() && second < nums2.size()){
                if(nums1[first] <= nums2[second]){ 
                    poppedOutNum = nums1[first];
                    first++;
                } 
                else{
                    poppedOutNum = nums2[second];
                    second++;
                }
            }
            else if(first < nums1.size()){
                poppedOutNum = nums1[first];
                first++;
            }
            else{
                poppedOutNum = nums2[second];
                second++;
            }
            if(realIndex == middle){
                numberOfMiddlesMissing--;
                middleSum += poppedOutNum;
                middle++;
            }
            realIndex++;
        }
        if(totalSize%2 == 0) middleSum /= 2; 
        return middleSum;
    }
};