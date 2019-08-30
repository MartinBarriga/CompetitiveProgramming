#include <iostream>
#include <vector>
using namespace std;
vector<int> row1;
vector <int> row2;
vector <long long int> t(2, -1);
vector <vector <long long int> > answ(100001, t);
int n;

long long int dp(int i, int turn){
    if(i == n) return 0;
    if(answ[i][turn] == -1){
        if(turn == 0){
            answ[i][turn] = max(dp(i+1, 1) + row1[i], dp(i+1, 0));
        }
        else if(turn == 1){
            answ[i][turn] = max(dp(i+1, 0) + row2[i], dp(i+1, 1));
        }
    }
    return answ[i][turn];
}

int main(){
    cin >> n;
    row1.assign(n, 0);
    row2.assign(n, 0);
    for(int i = 0; i < n; i++) cin >> row1[i];
    for(int i = 0; i < n; i++) cin >> row2[i];
    cout << max(dp(0,0), dp(0,1)) << endl;
    return 0;
}