#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, height, sum = 0, person;
    cin >> n >> height;
    for(int i = 0; i < n; i++){
        sum++;
        cin >> person;
        if(person > height) sum++;
    }
    cout << sum << endl;
    return 0;
}