#include <iostream>
#include <vector>
using namespace std;
vector <int> valor;
vector <int> tam;
vector <int> arr(2001, -1);
vector <vector <int> > mat(2001, arr);
int knapsack( int indice, int capacidad){
    if(mat[indice][capacidad] != -1){
        return mat[indice][capacidad];
    }
    if(indice == valor.size()){
        mat[indice][capacidad] = 0;
    }
    else if(tam[indice] > capacidad){
        mat[indice][capacidad] = knapsack (indice+1, capacidad);
    }
    else {
        int val1, val2;
        val1 = valor[indice] + knapsack(indice+1, capacidad - tam[indice]);
        val2 = knapsack(indice+1, capacidad);
        mat[indice][capacidad] = max(val1, val2);
    }
    return mat[indice][capacidad];
}
int main(){
    int capacidad, n, res, size, value;
    cin >> capacidad >> n;
    for(int i = 0; i < n; i++){
        cin >> size>> value;
        tam.push_back(size);
        valor.push_back(value);
    }
    res = knapsack(0,capacidad);
    cout << res << endl;
    return 0;
} 