#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> arr(1001);
vector<vector<int> > mat(1001, arr);
int lcs(string x, string y){
    for(int i = x.size(); i >=0 ; i--){
        for(int j = y.size(); j >=0; j--){
            if(i==x.size() || j==y.size() ) mat[i][j] = 0;
            else{
                if(x[i]==y[j]){
                    mat[i][j] = 1 + mat[i+1][j+1];
                }
                else{
                    mat[i][j] = max(mat[i+1][j], mat[i][j+1]);
                }
            }
        }
    }
    return mat[0][0];
}
int main(){
    string x,y;
    cin >> x >> y;

    int resultado = lcs(x,y);
    /*for(int i =0;  i <=x. size(); i++){
        for(int j = 0; j <= y.size(); j++){
            cout << mat[i][j] << " ";    
        }
        cout << endl;
    }*/
    cout << resultado << endl;
    return 0;
}