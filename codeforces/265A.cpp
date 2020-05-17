#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s2 >> s1;
    int pointer = 0;
    for(int i = 0; i < s1.size() && pointer < s2.size(); i++){
        if(s1[i] == s2[pointer]) pointer++;
    }
    if(pointer < s2.size()) pointer++;
    cout << pointer << endl;
    return 0;
}