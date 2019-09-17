#include <vector>
#include <iostream>
using namespace std;
vector<int> row(302, -1);
vector<vector<int>> answ(1002,row);
int n;
int dp(int index, int last, int *ar){
    if(index == n) return 0;
    if(answ[index][last+1] == -1){
        if(ar[index] > last){
            answ[index][last+1] = max(dp(index+1, ar[index], ar) +1, dp(index+1, last, ar));
        }
        else{
            answ[index][last+1] = dp(index+1, last, ar);
        }
    }
    return answ[index][last+1];
}
int main() {
    int t;
    cin >> t;
    for(int x = 0;  x < t; x++){
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        answ.assign(1002, row);
        cout << dp(0 ,-1, ar) << endl;
    }
	return 0;
}
