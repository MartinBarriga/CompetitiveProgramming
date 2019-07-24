#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

long long int maximo,valorMaximo=-INFINITY;

long long int  max(vector <long long int> &v, int pos){
    if(pos < v.size()- 1){
        maximo = max(v,pos+1);
        if(v[pos]+maximo < v[pos])
        { 
            if(valorMaximo < v[pos]) valorMaximo = v[pos];
            return v[pos];
        }
        else{
            if(valorMaximo < v[pos] + maximo) valorMaximo = v[pos]+maximo;
            return (v[pos] + maximo);
        }
    }
    else{
        return v[pos];
    }
}

int main(){
    int n;
    vector<long long int>v; 
    long long int num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
    }
    max(v,0);
    cout << valorMaximo<< endl;
    return 0;
}