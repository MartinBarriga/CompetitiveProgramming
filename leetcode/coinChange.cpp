class Solution {
public:
    vector<vector<int> > storageAnsw = vector<vector<int> > (100, vector<int>(10000, -1));
    int traverse(int index,vector<int>&coins, int amount){
        if(amount < 0) return INT_MAX;
        if(storageAnsw[index][amount] == -1){
            if(amount == 0) storageAnsw[index][amount] = 0;
            else if(index == coins.size()) storageAnsw[index][amount] =  INT_MAX;
            else{
                int takeIt = traverse(index, coins, amount-coins[index]);
                int dontTakeIt = traverse(index+1, coins, amount);
                if(takeIt == INT_MAX) storageAnsw[index][amount] =  dontTakeIt;
                else storageAnsw[index][amount] =  min(takeIt+1, dontTakeIt);
            } 
        }
        return storageAnsw[index][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int Answ = traverse(0, coins, amount);
        if(Answ == INT_MAX) return -1;
        return Answ;
    }
};