#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, dif;
    int a,b, maxi, mini;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a%2 == 0 && b%2== 0){
            cout << "abdullah" << endl;
        }
        else{
            cout << "hasan" << endl;
        }
    }
    return 0;
}