#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<int> enemy;
vector<int> answ(300005, -1);
int dp(int index){
   if(index >= n) return 0;
   else{
        if(answ[index] == -1){
            answ[index] = max(dp(index + m) + enemy[index], dp(index+1));
        }
       return answ[index];
   }
}
int main(){
    cin >> n >> m;
    int newEnemy;
    for(int i = 0; i < n; i++){
        cin >> newEnemy;
        enemy.push_back(newEnemy);
    }
    cout << dp(m) << endl;
    return 0;
}