#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isKEnough(vector<long long int> &ar, long long int begin, long long int k, long long int answ, long long int n){
    for(long long int i = begin; i < n; i++){
        if(ar[i] < answ){
            k = k - (answ- ar[i]);
        }
        if(k < 0) return false;
    }
    return true;
}
int main(){
    long long int n, k, left, right, mid, medianIndex, finalAnsw = 0, number;
    bool answer;
    vector<long long int> ar;
    cin >> n >> k;
    for(long long int i = 0; i < n; i++){
        cin >> number;
        ar.push_back(number);
    }
    sort(ar.begin(), ar.end());
    medianIndex = n/2;
    left = ar[medianIndex];
    right = 10000000000;
    while(left <= right){
        mid = left + (right-left)/2;
        answer = isKEnough(ar, medianIndex, k, mid, n);
        if(answer == true){
            finalAnsw = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout << finalAnsw << endl; 

    return 0;
}