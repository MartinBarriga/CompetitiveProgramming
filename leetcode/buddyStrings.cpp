class Solution {
public:
    bool buddyStrings(string A, string B) {
        int numOfDiff = 0;
        unordered_set<char> seenChars;
        bool atLeastOneRepeated = false;
        char firstDiffA, secondDiffA, firstDiffB, secondDiffB;
        if(A.size() != B.size()) return false;
        for(int index = 0; index <= A.size(); index++){
            if(seenChars.count(A[index]) == 1){
                atLeastOneRepeated = true;
            }
            else{
                seenChars.insert(A[index]);
            }
            if(A[index] != B[index]){
                numOfDiff++;
                if(numOfDiff == 1){
                    firstDiffA = A[index];
                    firstDiffB = B[index];
                }
                else if(numOfDiff == 2){
                    secondDiffA = A[index];
                    secondDiffB = B[index];
                }
                else{
                    return false;
                }
            }
        }
        if((numOfDiff == 2 && firstDiffA == secondDiffB && secondDiffA == firstDiffB) || (numOfDiff == 0 && atLeastOneRepeated) ) return true;
        return false;
    }
};