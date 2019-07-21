#include <iostream>
using namespace std;
int main(){
    int n, count;
    cin >> n;
    char mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j= 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            count = 0;
            if(j < n-1 && mat[i][j+1] == 'o') count++;
            if(j > 0 && mat[i][j-1] == 'o') count++;
            if(i < n-1 && mat[i+1][j] == 'o') count++;
            if(i > 0 && mat[i-1][j] == 'o') count++;
            if(count %2 != 0){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}