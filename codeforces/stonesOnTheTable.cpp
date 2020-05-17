#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    string s;
    cin >> n;
    cin >> s;
    char last = s[0];
    for(int i = 1; i < n; i++){
        if(s[i] == last){
            sum++;
        }
        last = s[i];
    }
    cout << sum << endl;
    return 0;
}