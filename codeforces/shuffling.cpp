#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int n, half;
    long long int t, num, aux;
    cin >> n;
    cin >> t;
    num = pow(2, n);
    vector <long long int> v(num, 0);
    for(int i= 0; i < num; i++){
        cin >> v[i];
    }
    if(t%2!=0){
        reverse(v.begin(), v.end());
 
    }
    for(int i= 0; i < num; i++){
            cout << v[i] << " ";
        }
    cout << endl;
    return 0;
}