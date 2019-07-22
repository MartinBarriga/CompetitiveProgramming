#include <iostream>
using namespace std;
 
int matriz[1000][1000];
void hankel(int n){
    if(n==3){
        matriz[0][0]=1;
        matriz[0][1]=3;
        matriz[0][2]=5;
        matriz[0][3]=5;
    }
    else{
        hankel(n-1);
        matriz[n-3][0] = 1;
        for(int i = 1; i < n; i++){
            matriz[n-3][i]= (matriz[n-3][i-1] + matriz[n-4][i])%1000000;
        }
        matriz[n-3][n] = matriz[n-3][n-1];
    }
}
int main(){
    int n,resultado;
    hankel(1000);
    do{
        cin >> n;
        if(n !=0){
            resultado = matriz[n-3][n];
            cout << resultado << endl;
        }
    }while(n !=0);
    
    return 0;
} 