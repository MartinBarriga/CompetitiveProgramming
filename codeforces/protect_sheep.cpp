#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cin >> r >> c;
    char mat[r][c];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> mat[i][j];
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(mat[i][j] == '.') mat[i][j] = 'D';
            else if(mat[i][j] == 'W'){
                if( (i+1 < r && mat[i+1][j] == 'S') || (i-1 >=0 && mat[i-1][j] == 'S') || (j+1 < c && mat[i][j+1] == 'S') || (j-1 >=0 && mat[i][j-1] == 'S') ) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}