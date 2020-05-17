#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    int sum = 0;
    cin >> a >> b >> c >> d;
    if(a == b || a == c || a == d){
        sum++;
    }
    if(b == c || b == d){
        sum++;
    }
    if(c == d){
        sum++;
    }
    cout << sum << endl;
    return 0;
}