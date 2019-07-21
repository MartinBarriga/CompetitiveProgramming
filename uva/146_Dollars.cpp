#include<iostream>
#include <vector>
#include <math.h>
using namespace std;
vector <float> moneda(11);
vector <long long int> arr(30001, -1);
vector< vector<long long int> > mat(12, arr);
long long int dollars(int indice, float cantidad){
    if(mat[indice][cantidad*100] != -1){
        return mat[indice][cantidad*100];
    }
    else if(cantidad == 0) {
        mat[indice][cantidad*100] = 1;
    }
    else if(indice > 10){
        mat[indice][cantidad*100] = 0;
    }
    else if(moneda[indice] > cantidad){
        mat[indice][cantidad*100]  = dollars(indice+1, cantidad);
    }
    else{

        mat[indice][cantidad*100] = dollars(indice, round((cantidad - moneda[indice])*100)/100) + dollars(indice+1, cantidad);
    }
    return mat[indice][cantidad*100];
}
int main(){
    moneda[0] = 100.0;
    moneda[1] = 50.0;
    moneda[2] = 20.0;
    moneda[3] = 10.0;
    moneda[4] = 5.0;
    moneda[5] = 2.0;
    moneda[6] = 1.0;
    moneda[7] = 0.5;
    moneda[8] = 0.2;
    moneda[9] = 0.1;
    moneda[10] = 0.05;
    float prueba;
    long long int resultado;
    int espacio1,espacio2, i;
    while(cin >> prueba){
        if(prueba == 0.00) return 0;
        resultado = dollars(0, prueba);
        i=1;
        while(((int)prueba)/pow(10, i)>=1){
            i++;
        }
        espacio1=i+3;
        i=1;
        while(resultado/pow(10, i)>=1){
            i++;
        }
        espacio2=i;
        for(i = 6; i >espacio1; i--) cout << " ";
        printf("%.2f", prueba);
        for( i = 17; i > espacio2; i--) cout << " " ;
        cout << resultado << endl;
    }
    return 0;
}
