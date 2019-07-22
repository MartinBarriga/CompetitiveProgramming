#include <iostream>
#include <vector>
using namespace std;
vector <int> numero(11);
vector <int> arr(12,-1);
vector <vector <int> > mat(22, arr);
long long int elis(int indice, int n, int anterior){
    if(mat[anterior][indice]!=-1){
        return mat[anterior][indice];
    }
    if(indice == n) {
        mat[anterior][indice] = 0;
    }
    else if(numero[indice] <= anterior){
        mat[anterior][indice] =  elis(indice+1, n, anterior);
    }
    else{
        mat[anterior][indice] = max(elis(indice+1, n, anterior), 1 + elis(indice+1, n, numero[indice]));
    }
    return mat[anterior][indice];
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> numero[i];
    }
    cout << elis(0, n, 0) << endl;
    return 0;
} 