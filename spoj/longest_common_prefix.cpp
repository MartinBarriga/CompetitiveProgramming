#include<iostream>
#include <string>
using namespace std;
 
int lcp (string s, int a, int b){
    if(s[a] == s[b] && a < s.size() && b < s.size()){
        return 1 + lcp (s, a+1, b+1);
    }
    else{
        return 0;
    }
}
void remplazar(string &s, int a, char c){
    s[a] = c;
}
 
void insertar(string &s, int a, int pos, char c){
    if(pos == a){
        s.push_back(c);
    }
    else{
        char letra = s.back();
        s.pop_back();
        insertar(s, a, pos-1,c);
        s.push_back(letra);
    }
       
}
 
int main(){
    int t,q,a,b,res;
    char c,mov;
    string s;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >>s >> q;
        for( int j = 0; j < q; j++){
            cin >> mov >> a;
            if(mov == 'R' || mov == 'I') cin >> c;
            else cin >> b;
            if(mov == 'R') remplazar(s, a-1, c);
            else if(mov =='I') insertar(s, a, s.size(),c);
            else{
                res = lcp(s, a-1, b-1);
                cout << res << endl;
            }
            
        }
    }
    return 0;
}