#include <iostream>
#include <string>
#include <vector>
using namespace std;
int length1, length2;
string str1, str2;
vector<int> row(105, -1);
vector< vector<int> >answ(105, row); 
int dp(int index1, int index2){
    if(index1 == length1 || index2 == length2) return 0;
    if(answ[index1][index2] == -1){
        if(str1[index1] == str2[index2]) answ[index1][index2] = dp(index1+1, index2+1) + 1;
        else answ[index1][index2] = max(dp(index1+1, index2), dp(index1, index2+1));
    }
    return answ[index1][index2];
}
int main(){
    int numberOfCases;
    cin >> numberOfCases;
    for(int i = 0; i < numberOfCases; i++){
        cin >> length1 >> length2 >>  str1 >> str2;
        answ.assign(105, row);
        cout << dp(0,0) << endl;
    }
    return 0;
}