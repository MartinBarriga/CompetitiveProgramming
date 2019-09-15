#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, difference = 0;
    cin >> n;
    vector<int> number(n);
    vector<int> sorted;
    
    for(int i = 0; i <n; i++){
        cin >> number[i];
        sorted.push_back(number[i]);
    }
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i <n; i++){
        if(number[i] != sorted[i]) difference++;
    }
    if( (difference+1)/2 < 2) cout << "YES"<< endl;
    else cout << "NO" << endl;
  
    return 0;
}