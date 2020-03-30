
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    string newNum;
    cin >> n;
    unordered_set<int> numbers;
    for(int i = 0; i < n; i++){
        cin >> newNum;
        if(newNum.size() > 7) continue;
        int intNum = stoi(newNum);
        if(intNum < 0) continue;
        numbers.insert(intNum);
    }
    for(int i = 0; i <= 1000005; i++){
        if(numbers.find(i) == numbers.end()){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}