#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    double IngresedNumber;
    cin >> n;
    int ar[n];
    short  sign[n];
    for(int i = 0; i < n; i++){
        cin >> IngresedNumber;
        ar[i] =  IngresedNumber;
        sum += ar[i]; 
        if(ar[i] == IngresedNumber){
            sign[i] = 0;
        }
        else if(IngresedNumber > 0) sign[i] = 1;
        else if(IngresedNumber < 0) sign[i] = -1;
    }
    
    for(int i = 0; i < n; i++){
        if(sum > 0 && sign[i] == -1){
            ar[i]--;
            sum--;
        }
        else if(sum < 0 && sign[i] == 1){
            ar[i]++;
            sum++;
        }
        cout << ar[i] << endl;
    }
    return 0;
}