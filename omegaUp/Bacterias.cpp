#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int mat[100][100];
int m, n;
vector <int> arr(101,-1);
vector <vector <int> > respuesta(101, arr);

int camino(int i, int j){
    if(respuesta[i][j]!= -1){
        return respuesta[i][j];
    }
    else if(i==m || j == n) {
        respuesta[i][j] = 90001;
    }
    else if( (i == m -1) && (j == n-1)){
        respuesta[i][j] = mat[i][j];
    }
    else{
        respuesta[i][j] = mat[i][j] + min(camino(i+1, j),camino(i,j+1));
    }
    return respuesta[i][j];
}
int main(){
    int res;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j =0; j <n; j++){
            cin >> mat[i][j];
        }
    }
    res = camino(0, 0);
    cout << res << endl;
    return 0;
}