class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odds = 0;
        int evens = 0;
        for(int i = 0; i < chips.size(); i++){
            if(chips[i] % 2 == 0) evens++;
            else odds++;
        }
        if(evens > odds) return odds;
        return evens;
    }
};