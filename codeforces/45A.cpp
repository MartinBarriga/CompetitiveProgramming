#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a') lower++;
        else{
            upper++;
        }
    }
    if(upper > lower){
        for(int i = 0; i < s.size(); i++){
            if(s[i]>= 'a') s[i] -= ('a' - 'A');
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] < 'a') s[i] += ('a' - 'A');
        }
    }
    cout << s << endl;
    return 0;
}