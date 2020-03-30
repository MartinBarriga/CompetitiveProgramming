#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int maxValidChars, validChars = 0;
unordered_map<int, int> palindromes;
vector<vector<int> > dp(5005, vector<int>(5005, -1));
int getPalindromes(string &word, int l, int r){
    if(l > r) return 0;
    if(dp[l][r] == -1){
        if(l == r){
            if(maxValidChars == 0) maxValidChars = 1;
            if(palindromes.find(1) == palindromes.end()){
                palindromes[1] = 0;
            }
            palindromes[1]++;
            dp[l][r] = 1;
            return 1;
        }
        else{
            if(word[l] == word[r]){
                int insideVal = getPalindromes(word, l+1, r-1);
                if(insideVal == -2){
                    dp[l][r] = -2;
                }
                else{
                    dp[l][r] = insideVal + 2;
                    if(dp[l][r] > maxValidChars){
                        maxValidChars = dp[l][r];
                    }
                    if(palindromes.find(dp[l][r]) == palindromes.end()){
                        palindromes[dp[l][r]] = 0;
                    }
                    palindromes[dp[l][r]]++;
                }
            }
            else{
                dp[l][r] = -2;
            }
            getPalindromes(word, l+1, r);
            getPalindromes(word, l, r-1);
        }
    }
    return dp[l][r];
}
int main(){
    int n;
    string word;
    cin >> n >> word;
    maxValidChars = 0;
    getPalindromes(word, 0, word.size()-1);
    cout << maxValidChars << endl << palindromes[maxValidChars] << endl;
    return 0;
}