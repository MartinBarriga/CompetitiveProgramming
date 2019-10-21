#include<iostream>
using namespace std;
int main(){
    int testCases;
    long long int n,k, answ;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        cin >> n >> k;
        answ = 0;
        while(n > 0){
            if(n%k != 0){
                answ+= n%k;
                n = n-(n%k);
            }
            else{
                n = n/k;
                answ++;
            }
        }
        cout << answ << endl;
    }
    return 0;
}
