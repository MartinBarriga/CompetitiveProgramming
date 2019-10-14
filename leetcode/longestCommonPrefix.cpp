class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        int isEqual = true;
        string prefix = "";
        if (strs.empty()) return prefix;
        if(strs.size() == 1) return strs[0];
        while(isEqual == true){
            for(int i = 1; i < strs.size(); i++){

                if( strs[i].size() == index || strs[0].size() == index || strs[i][index] != strs[0][index]){
                    isEqual = false;
                    break;
                }
            }
            if(isEqual == true){
                prefix.push_back(strs[0][index]);
                index++;
            }

        }
        return prefix;
    }
};