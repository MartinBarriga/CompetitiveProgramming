#include <iostream>
#include <string>

using namespace std;
string a;
 
int main(){
    int n, A = 0, G = 0, C = 0, T = 0;
    cin >> n;
    cin >> a;
    for(int i = a.size()-1; i>=0; i--){
        if(a[i] == 'A') A++;
        if(a[i] == 'G') G++;
        if(a[i] == 'C') C++;
        if(a[i] == 'T') T++;
    }
    cout << min(min(min(A,G),C),T) << endl;
    return 0;
}