#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, parts = 1;;
    cin >> n;
    string last, current;
    for(int i = 0; i < n; i++){
        cin >> current;
        if(current.compare(last) != 0){
            parts++;
        }
        last = current;
    }
    cout << parts;
    return 0;
}