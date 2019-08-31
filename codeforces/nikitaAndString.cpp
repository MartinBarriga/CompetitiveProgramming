#include <iostream>
#include <string>
#include <vector>
using namespace std;
int size;
string word;
vector<int> col (2, -1);
vector< vector<int> > answ(5001, col); 
int numberOfAafter(int index){
    int numberOfA = 0;
    while(index < size){
        if(word[index] == 'a') numberOfA++;
        index++;
    }
    return numberOfA;
}
int dp(int index, int Case){
    if(index == size) return 0;
    if(answ[index][Case] == -1){
        if(Case == 0){
            if(word[index] == 'a') answ[index][Case] = dp(index+1, 0) + 1;
            else answ[index][Case] = max(dp(index+1, 1) +1, dp(index+1, 0));
        }
        else{
            if(word[index] == 'b') answ[index][Case] = dp(index+1, 1) + 1;
            else answ[index][Case] = max(dp(index+1, 1), numberOfAafter(index));
        }
    }
    return answ[index][Case];
}
int main() {
    cin >> word;
    size = word.size();
    cout << dp(0, 0) << endl;
 	return 0;
}