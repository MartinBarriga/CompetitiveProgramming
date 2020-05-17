#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<bool> letters(26, false);
    int distincts = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!letters[s[i]-'a']) {
            letters[s[i]-'a'] = true;
            distincts++;
        }
    }
    if(distincts %2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}