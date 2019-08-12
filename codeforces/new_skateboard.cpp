#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    char s[300001];
    int numero, tam;
    long long int total=0;
    scanf("%s",s);
    tam = strlen(s);
 
    for(int i = tam-1; i >=0; i--){
        if((s[i]-'0')%4 == 0) total++;
 
        if(i -1 >= 0){
            numero = (s[i]-'0') + (s[i-1]-'0')*10;
            if(numero%4 == 0) total++;
            if(i-2>=0){
                if(numero%4==0){
                    total += i-2+1;
                }
            }
        }
    }
    cout << total << endl;
    return 0;
}