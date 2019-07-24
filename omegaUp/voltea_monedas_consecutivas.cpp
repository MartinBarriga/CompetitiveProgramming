#include <iostream>
#include <vector>
using namespace std;

int voltea(vector <int> ar, int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(ar[i] == 0){
            if(i + m > n) return -1; 
            for(int j = 0; j < m; j++ ){
                if(ar[i+j] == 1) ar[i+j] = 0;
                else ar[i+j] = 1;
            }
            sum++;
        }
    }
    return sum;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector <int> ar(n);
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    cout << voltea(ar, n, m) << endl;
    return 0;
}