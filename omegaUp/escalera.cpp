#include <iostream>
#include <vector>
using namespace std;
vector <int> paso;
vector<long long int> arr(10002, -1);
vector <vector <long long int> > mat(102, arr);
long long int escalera(int indice, int escalon){
    if(mat[indice][escalon] != -1) return mat[indice][escalon];
    if(indice == paso.size() || (escalon - paso[indice]) <0 ){
        mat[indice][escalon] = 0;
    }
    else if(escalon - paso[indice]  == 0) mat[indice][escalon] = 1;
    else {
        mat[indice][escalon] = escalera(0, escalon-paso[indice]) + escalera(indice+1, escalon);
    }
    return mat[indice][escalon];
}
int main(){
    int escalon, salto;
    long int res;
    cin >> escalon >> salto;
   
    for(int i = 0; i < salto; i++){
        paso.push_back(i+1);
    }
    res = escalera(0, escalon);
    cout << res << endl;
    return 0;
}