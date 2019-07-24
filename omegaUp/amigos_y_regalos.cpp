#include <iostream>
#include <math.h>
using namespace std;

long long int indiceMenor;

void calcular(long long int primo1, long long int primo2, long long int c1, long long int c2, long long int bajo,long long int indice){ 
    long long int cantidad1, cantidad2, repetidos, repetidosc2, repetidosc1, mid, ban, cantidadTotal;
    mid = (bajo + indice)/2;
    ban = mid/(primo1*primo2);
    cantidad2 = mid/primo1-ban;
    cantidad1 = mid/primo2-ban;
    repetidos = mid-cantidad1-cantidad2-ban;
    if(c2>cantidad2) repetidosc2 = c2-cantidad2;
    else repetidosc2 =0;
    if(c1 > cantidad1) repetidosc1 = c1-cantidad1;
    else repetidosc1 = 0;
    if( (((repetidosc2 + repetidosc1) <= repetidos) && (cantidad1>=0 && cantidad2 >=0)) || (cantidad2 == c2 && cantidad1 == c1)) {
        //cout << "Rango " << bajo <<"-" << indice <<  ": " << mid <<" Pasa la prueba" << endl;
        if(mid < indiceMenor) {
            indiceMenor = mid;
          //  cout << "Se elige como indice menor " << mid<< endl;
        }
        if(indice > bajo)  calcular(primo1, primo2, c1, c2, bajo, mid-1);
    }
    else{
        //cout << "Rango" << bajo <<"-" << indice <<": " << mid <<   " No pasa la prueba" << endl;
        if(bajo<indice) calcular(primo1, primo2, c1, c2, mid + 1, indice );
    }
    

}
int main(){
    long long int c1,c2,resultado,primo1, primo2;
    indiceMenor = INFINITY;
    cin >> c1 >> c2 >> primo1 >> primo2;
    calcular(primo1, primo2, c1,c2, 1, 3*(c1+c2));
    cout << indiceMenor<< endl;
    return 0;
}