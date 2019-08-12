#include <iostream>
#include <string>
#include <vector>
using namespace std;
string a, b;
vector<int> row(1001,-1);
vector< vector<int> > mat(1001, row);
int lcs(int i, int j){
    if(mat[i][j] !=-1) return mat[i][j];
    if(i >= a.size() || j >= b.size()){
        mat[i][j] = 0;
    }
    else if(a[i] == b[j]){
 
        mat[i][j] = 1 + lcs(i+1, j+1);
    }
    else{
        mat[i][j] = max(lcs(i, j+1), lcs(i+1,j));
    }
    return mat[i][j];
}
int main(){
    cin >> a >> b;
    cout << lcs(0,0) << endl;
    return 0;
}