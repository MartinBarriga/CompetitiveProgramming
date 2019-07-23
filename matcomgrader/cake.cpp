#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cake(vector <int> ar){
    int acumulado = 1;
    int pesoAcumulado = ar[0];
    for(int i = 1; i < ar.size(); i++){
        
        if(pesoAcumulado < ar[i] ){
            pesoAcumulado +=ar[i];
            acumulado++;
        }
    }
    return acumulado;
}
int main(){
    int n,entrada;
    vector <int> ar;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> entrada;
        ar.push_back(entrada);
    }
    sort(ar.begin(), ar.end());
    cout << cake(ar) << endl;
    return 0;
}