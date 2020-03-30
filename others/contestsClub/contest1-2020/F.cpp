#include<iostream>
#include<string>
using namespace std;
int main(){
    int amountA = 0, amountB = 0, amountC = 0;
    string word;
    cin >> word;
    int i = 0;
    if(word.size() == 0) {
        cout << "NO" << endl;
        return 0;
    }
    while(i < word.size() && word[i] == 'a'){
        i++;
        amountA++;
    }
    if(amountA == 0) {
        cout << "NO" << endl;
        return 0;
    }
    while(i < word.size() && word[i] == 'b'){
        i++;
        amountB++;
    }
    if(amountB == 0) {
        cout << "NO" << endl;
        return 0;
    }
    while(i < word.size() && word[i] == 'c'){
        i++;
        amountC++;
    }
    if(i == word.size() && (amountC == amountA || amountC == amountB)){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}