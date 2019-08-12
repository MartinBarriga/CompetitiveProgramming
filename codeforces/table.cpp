#include <iostream>
using namespace std;
int main(){
    long long int a,b,k,total, ta=0, tb=0;
    cin >> a >> b >> k;
    a = a/k;
    b = b/k;
    if(a>2){
        ta = a-2;
    }
    if(b>2){
        tb = b-2;
    }
    total =  a*b - ta*tb;
    cout << total << endl;
    return 0;
}