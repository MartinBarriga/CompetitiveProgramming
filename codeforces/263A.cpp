#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> n;
            if(n == 1){
                sum = abs(i - 2) + abs(j - 2);
                cout << sum << endl;
                return 0;
            }
        }
    }
    return 0;
}