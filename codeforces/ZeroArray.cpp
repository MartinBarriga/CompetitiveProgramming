#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, number;
    vector<int> array;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        array.push_back(number);
    }
    sort(array.begin(), array.end());
    for(int i = 1; i < n; i++){
        array[i] -= array[i-1];
    }
    if(array[n-1] == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}