#include <iostream>
using namespace std;
int main(){
    long long int n, quantityofOnes=0, quantityOfMinusOnes=0, quantityOfCeros=0, difference, movements = 0;
    cin >> n;
    long long int ar[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    for(int i = 0; i < n; i++){
        if(ar[i] == 0){
            quantityOfCeros++;
            movements++;
        }
        else if(ar[i] == 1) quantityofOnes++;
        else if(ar[i] == -1)quantityOfMinusOnes++;
        else{
            difference = abs(ar[i])-1;
            movements+= difference;
            if(ar[i] > 0) quantityofOnes++;
            else quantityOfMinusOnes++;
        }
    }
    if(quantityOfMinusOnes %2 != 0 && quantityOfCeros == 0){
        movements+=2;
    }
    cout << movements << endl;
    return 0;
}