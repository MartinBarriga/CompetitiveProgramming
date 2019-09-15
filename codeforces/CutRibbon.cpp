#include<iostream>
#include<vector>
using namespace std;
int n, a, b, c;
vector<int> answ(4005, -1);
int dp(int size){
    if(size < 0) return INT_MIN;
    else if(size == 0) return 0;
    else if(answ[size] == -1){
        answ[size] = max(max(dp(size-a), dp(size-b)), dp(size-c)) + 1;
    }
    return answ[size];
}
int main(){
    cin >> n >> a >> b >> c;
    cout << dp(n) << endl;
    return 0;
}