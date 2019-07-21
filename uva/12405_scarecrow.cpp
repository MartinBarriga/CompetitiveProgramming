#include <iostream>
#include <vector>
using namespace std;

int scarecrow(vector <char> ar){
    int espantapajaros = 0;
    for(int i = 0; i< ar.size(); i++){
        if(ar[i] == '.'){
            for (int j =i; j < ar.size() && j <= i+2; j++){
                ar[j] = '#';
            }
            espantapajaros++;
        }
    }
    return espantapajaros;
}
int main(){
    int casos,tam;
    vector <char> ar;
    char caracter;
    cin >> casos;
    for(int i = 0; i< casos; i++){
        cin >> tam;
        for(int j = 0; j < tam; j++){
            cin >> caracter;
            ar.push_back(caracter); 
        }
        cout << "Case " << i+1 <<": " << scarecrow(ar) << endl;
        ar.clear();
    }
   
    return 0;
}