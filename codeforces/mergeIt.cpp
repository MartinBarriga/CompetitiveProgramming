#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    long long int t, n, num, answ, ones, twos;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        answ = 0;
        ones = 0;
        twos = 0;
        for(int j = 0; j < n; j++){
            cin >> num;
            if(num%3 == 0) answ++;
            else{
                if(num%3 == 1) ones++;
                if(num%3 == 2) twos++;
            }
        }
        if(ones > twos){
            ones -= twos;
            answ += twos;
            twos = 0;
        }
        else{
            twos -= ones;
            answ += ones;
            ones = 0;
        }
        answ += ones/3 + twos/3;
        cout << answ << endl;
    }
    return 0;
}