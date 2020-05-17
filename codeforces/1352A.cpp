#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int x = 0; x < t; x++){
        string num;
        cin >> num;
        vector<string> answ;
        for(int i = 0; i < num.size(); i++){
            if(num[i] > '0'){
                string newNum = "";
                newNum.push_back(num[i]); 
                answ.push_back(newNum);
            }
            else{
                answ[answ.size()-1].push_back('0');
            }
        }
        cout << answ.size() << endl;
        for(int i = 0; i < answ.size(); i++){
            int expected = num.size() - i;
            string newZeros = "";
            //cout << expected << " " << answ[i].size() << endl;
            if(expected - answ[i].size() > 0){
                //cout << "got" << expected << " " << answ[i].size() << endl;
                newZeros.assign(expected - answ[i].size() , '0');
            } 
            answ[i] =  answ[i] + newZeros;
            cout << answ[i] << " ";
        }
        cout << endl;
    }
    return 0;
}