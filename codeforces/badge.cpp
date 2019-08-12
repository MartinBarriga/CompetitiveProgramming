#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,j;
    cin >> n;
    vector<int> alumnos(n, 0);
    
    for(int i =0; i <n; i++){
        cin >> alumnos[i];
    }
    for(int i = 0; i<n; i++){
        vector<int> culpabilidad(n,0);
        j=i;
        culpabilidad[j]++;
        do{
            j = alumnos[j]-1;
            culpabilidad[j]++;
        }while(culpabilidad[j] <2);
        cout << j +1 << " ";
    }
    cout << endl;
    return 0;
}