#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int k, growQuantity, i, numberOfMonths = 0;
    vector<int> month;
    cin >> k;
    for(i = 0; i < 12; i++){
        cin >> growQuantity;
        month.push_back(growQuantity);
    }
    sort(month.begin(), month.end(), greater<int>());
    i = 0;
    while( i < 12 && k > 0){
        numberOfMonths++;
        k -= month[i];
        i++;
    }
    if(k <= 0) {
        cout << numberOfMonths << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}