#include <iostream>
#include <vector>
using namespace std;
int carrera(vector <char> letras, long long int m, int t, int u, int f, int d){
    int contador = 0, resta;
    for(int i=0; i < letras.size(); i++){
        if(letras[i] == 'U' || letras[i] == 'D'){
            resta = d+u;
        }
        else{
           resta = f*2;
        }
        if(m-resta >=0){
                m-= resta;
                contador++;
        }
        else{
            break;
        }
    }
    return contador;
}
int main(){
    long long int m;
    int t, u, f, d;
    char letra;
    vector <char> letras;
    cin >> m >> t >> u >> f >> d;
    for(int i = 0; i < t; i++){
        cin >> letra;
        letras.push_back(letra);
    }
    cout << carrera(letras, m, t, u, f, d) <<endl;
    return 0;
}