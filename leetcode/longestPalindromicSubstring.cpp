class Solution {
public:
    int maxLength = -1, maxL, maxR;
    vector<vector<int>> dp = vector<vector<int>>(1000, vector<int>(1000, -1));
    int isItPalindrome(int l, int r, string& s){
        if(l > r) return true;
        if(dp[l][r] == -1){
            if(s[l] == s[r] && isItPalindrome(l+1, r-1, s) == 1){
               dp[l][r] = 1;
                if(maxLength < r- l){
                    maxLength = r-l;
                    maxL = l;
                    maxR = r;
                }
            }
            else{
                dp[l][r] = 0;
                if(isItPalindrome(l+1, r, s)) return 0;
                isItPalindrome(l, r-1, s);
            }
        }
        return dp[l][r];
    }
    string longestPalindrome(string s) {
        isItPalindrome(0, s.size()-1, s);
        string answ = "";
        for(int i = maxL; i <= maxR; i++){
            answ += s[i];
        }
        return answ;
    }
};