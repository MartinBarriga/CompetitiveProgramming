#include <iostream>
#include <string>
using namespace std;
int main(){
    int queries, length;
    bool canBeDivided;
    string number;
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> length;
        cin >> number;
        if(length == 2 && number[0] >= number[1]){
            cout << "NO" << endl;
        }
        else{
             cout << "YES" << endl << "2" << endl;
            cout << number[0] << " ";
            for(int j = 1; j < length; j++){
                cout << number[j];
            }
            cout << endl;
        }
    }
    return 0;
}