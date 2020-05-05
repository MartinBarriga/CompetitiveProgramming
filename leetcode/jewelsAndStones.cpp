class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> jewels;
        for(int i = 0; i < J.size(); i++){
            jewels.insert(J[i]);
        }   
        int acum = 0;
        for(int i = 0; i < S.size(); i++){
            if(jewels.find(S[i]) != jewels.end()){
                acum++;
            } 
        }
        return acum;
    }
};