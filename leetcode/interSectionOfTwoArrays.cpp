class Solution {
public:
    bool search (int numberToSearch, set<int>&array2){
        auto it = array2.find(numberToSearch); 
        if(it == array2.end()) return false;
        return true;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool isThere;
        int currentNumber;
        vector<int> intersectedNumbers;
        set<int> array1, array2;
        for(int i = 0; i < nums1.size(); i++) array1.insert(nums1[i]);
        for(int i = 0; i < nums2.size(); i++) array2.insert(nums2[i]);
        for(auto index = array1.begin(); index != array1.end(); index++){
            isThere  = search(*index, array2);
            if(isThere == true){
                intersectedNumbers.push_back(*index);
            }
        }  
        return intersectedNumbers;
    }
};