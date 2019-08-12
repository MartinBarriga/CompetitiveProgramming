#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count =0, longitude;
    cin >> s;
    longitude = s.size();
    for(int i = 0; i < longitude; i++){
        if(s[i] == 'a') count ++;
    }
    while (count < longitude/2 +1){
        longitude--;
    }
    cout << longitude << endl;
    return 0;
}