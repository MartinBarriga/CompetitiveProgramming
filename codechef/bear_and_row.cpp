#include <iostream>
using namespace std;
long long int calcular(string s){
    long long int acum = 0, i=0, recorrido=0, soldado=0;
    while(s[i]!= '1'){
        i++;
    }
    i++;
    for(; i < s.size(); i++){
        while(s[i]!='1' && i < s.size()){
            recorrido ++;
            i++;
        }
        acum += soldado*recorrido + recorrido;
        if(recorrido > 0) acum+= soldado + 1;
        soldado ++;
        recorrido = 0;
    }
    return acum;
}
int main(){
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        cout << calcular(s) << endl;
    }
}