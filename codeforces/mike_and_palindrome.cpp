#include <iostream>
using namespace std;
int main(){
    int i, count = 0;
    string s;
    cin >> s;
    for(i = 0; i < s.size()/2; i++){
       // cout << s[i] << " " << s[s.size()-i-1] << endl;
        if(s[i] != s[s.size()-i-1]){
            
            count++;
            if(count == 2){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(count == 0 && s.size()%2 !=0){
        cout << "YES" << endl;
    } 
    else if(count == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}