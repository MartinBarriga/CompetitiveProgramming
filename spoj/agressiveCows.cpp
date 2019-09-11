#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1 2 3 4 8 9
bool prove(int distance, vector<int> stall, int n, int c){
    int pivot = stall[0];
    c--;
    for(int i = 1; i < n; i++){
        if(stall[i] - pivot >= distance){
            pivot = stall[i];
            c--;
        } 
        if(c <= 0) break;
    }
    if(c <= 0) return true;
    return false;
}
int main(){
    int t,n,c, newStall, l, r, mid, maxDistance;
    cin >> t;
    for(int x = 0; x < t; x++){
        cin >> n >> c;
        vector<int> stall;
        for(int i = 0; i < n; i++) {
            cin >> newStall;
            stall.push_back(newStall);
        }
        sort(stall.begin(), stall.end());
        l = 1;
        r = stall[n-1] - stall[0];
        while(l<=r){
            mid = (l + r)/2;
            cout << mid << endl;
            if(prove(mid, stall, n, c) == true){
                maxDistance = mid;
                l = mid + 1;
            } 
            else{
                r = mid - 1;
            }
        }
        cout << maxDistance << endl;
    }
    return 0;
}