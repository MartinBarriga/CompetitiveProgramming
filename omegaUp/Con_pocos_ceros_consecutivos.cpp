#include <iostream>
#include <math.h>
using namespace std;

int ceros(int n){
    if(n == 0) return 1;
    else if(n<4) return 2*ceros(n-1) - (n-1)/2;
    else{
        return ceros(n-1) + ceros(n-2)+ ceros(n-3) ;
    }
}
int main(){
    int res, n;
    cin >> n;
    res = ceros(n);
    cout << res << endl;
}