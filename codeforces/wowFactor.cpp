#include<iostream>
#include <string>
#include<vector>
using namespace std;
int main(){
    long long int v = 0, w = 0,  max = -1, o= 0, sum;
    string word;
    vector<int> quantity;
    vector<int> quantityO;
    cin >> word;
    int i = 0;
    while(word[i] != 'v' && i < word.size()) i++;
    for(i  = i; i < word.size(); i++){
        if(word[i] == 'v'){
            if(o > 0){
                quantityO.push_back(o);
            }
            o = 0; 
            v++;
            if(v == 2){
            w++;
            v = 1;
          }
        }
        else {
            o++;
            v = 0;
            if(w > 0){
                quantity.push_back(w);
                w = 0;
            }
        }
        
    }
    if(o > 0){
        quantity.push_back(o);
    }
    if(w > 0){
        quantity.push_back(w);
    }
    for(int i = 0; i< quantity.size(); i++) cout << quantity[i] << " ";
    cout << endl;
    for(int j= 0; j< quantityO.size(); j++) cout << quantityO[j] << " ";
    cout << endl;
    if(quantity.size() < 2 || quantityO.size() == 0) cout << "0" << endl;
    else{
        int j = 0;
        for( i = 0; i < quantity.size()-1; i++){
            sum = quantity[i] + quantity[i+1];
            for(int x = 0; x< quantityO[j]-1; x++){
                sum*=2;
            }
            quantity[i+1] = sum;
            if(sum > max) max = sum;
        }
        cout << max << endl;

    }
    return 0;
}