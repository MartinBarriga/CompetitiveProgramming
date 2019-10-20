class Solution {
public:
    vector<int> answ =  vector<int>(1001, -1);
    int climbStairs(int n) {
       if(n < 0) return 0;
       if(n == 0) return 1;
       else if(answ[n] == -1){
            answ[n] = climbStairs(n-1) + climbStairs(n-2);
        }
        return answ[n];
    }
};