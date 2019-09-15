#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long int sum =0;
    cin >> n;
    vector<long long int> number(n);
    for(int i = 0; i < n; i++){
        cin >> number[i];
    }
    sort(number.begin(), number.end());
    for(int i = 0; i< n/2; i++){
        sum += (number[i] + number[n-1-i])*(number[i] + number[n-1-i]);
    }
    cout << sum << endl;
    return 0;
}