#include <iostream>
#include <vector>
using namespace std;
vector<int> col(1001, -1);
vector< vector<int> > answ(1001, col);
int n=0;
int dp (int i, int j, vector < vector<int> > &mat){
    if(answ[i][j] == -1){
        if(i == n){
            answ[i][j] = 0;
        }
        else if(j == n){
            answ[i][j] = 0;
        }
        else{
            answ[i][j] = max (max(dp(i+1, j, mat), dp(i+1, j+1, mat)), dp(i+1, j-1, mat)) + mat[i][j];
        }
    }
    return answ[i][j];
}
int main(){
    int t, number;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> column(n, 0);
        vector< vector<int> > mat(n, column);
        answ.assign(1001, col);
        for(int x = 0; x < n; x++) for(int y = 0; y < n; y++){ 
            cin >> number;
            mat[x][y] = number;
        }
        int maxAnsw = -1, newAns;
        for(int z = 0; z < n; z++){
            newAns = dp(0, z, mat);
            if(newAns > maxAnsw) maxAnsw = newAns;
        }
        cout <<  maxAnsw << endl; 
    }
    return 0;
}