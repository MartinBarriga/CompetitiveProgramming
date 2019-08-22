#include <iostream>
using namespace std;
int main(){
    int n, m, sum;
    bool founded;
    cin >> n;
    int ar1[n];
    for(int i = 0; i < n; i++){
        cin >> ar1[i];
    }
    cin >> m;
    int ar2[m];
    for(int j = 0; j < m; j++){
        cin >> ar2[j];
    }
    for(int i = 0; i < n; i++){
        for(int j= 0; j<m; j++){
            sum = ar1[i] + ar2[j];
            founded = false;
            for(int x = 0; x < n; x++){
                if(ar1[x] == sum) {
                    founded = true;
                }
            }
            if(founded == false){
                for(int y = 0; y < m; y++){
                    if(ar2[y] == sum){
                        founded = true;
                    }
                }
            }
            if(founded == false){
                cout << ar1[i] << " " << ar2[j] << endl;
                return 0;
            }
        }
    }
    return 0;
}