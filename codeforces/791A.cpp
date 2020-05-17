#include<bits/stdc++.h>
using namespace std;
int main(){
    int limak, bob, periods = 0;;
    cin >> limak >> bob;
    while(limak <= bob){
        limak *= 3;
        bob *= 2;
        periods++;
    }
    cout << periods << endl;
    return 0;
}