#include <iostream>
using namespace std;

void calculate(int n){

    if(n == 4){
        cout << "4 * 3 = 12" << endl << "12 * 2 = 24" << endl << "24 * 1 = 24" << endl;
    }
    else if(n == 5){
        cout << "5 - 1 = 4" << endl << "4 - 2 = 2" << endl << "4 * 2 = 8" << endl << "8 * 3 = 24" << endl;
    }
    else{
        cout << n << " - " << n-1 << " = 1" << endl;
        cout << "1 * " << n - 2 << " = " << n-2 << endl;
        calculate(n-2);
    }
}
int main(){
    int n;
    cin >> n;
    if( n < 4){
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        calculate(n);
    }
    return 0;
}