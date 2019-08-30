#include <iostream>
#include <vector>
using namespace std;
vector<int> v(100001, 0);
vector<long long int> arreglo(100001, -1);
    long long int dp(long long int index){
    if(index > 100000){
        return 0;
    } 
    if(arreglo[index] == -1){
        long long int tomar = dp(index + 2) + index * v[index];
        long long int noTomar = dp(index+1);                   
        arreglo[index] = max(tomar, noTomar);
    }
    return arreglo[index];
}
int main(){
    int n, number;
    long long int max;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        v[number]++;
    }
    max = dp(1);
    cout << max << endl;
    return 0;
}