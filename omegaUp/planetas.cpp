#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>  
#include <algorithm>
using namespace std;
bool positive;
bool prove(double position, int n, vector<double> planet){
    double acum = 0;
    for(int i = 0; i < n; i++){
        
        acum+=  1/(planet[i] - position);
    } 

        if(acum > 0) return true;
        return false;
      
}
int main(){
    int n, i, j, acum = 0;
    double l, r, mid;
    cin >> n;
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    vector<double> planet(n);
    vector<double> solutions;
    for(i = 0; i < n; i++) cin >> planet[i];
    sort(planet.begin(), planet.end());
    for(i = 0,  j = 1; j < n; i++, j++){
        l = planet[i];
        r = planet[j];
        while(l <= r){ 
            mid = (l+r)/2;
            if( prove(mid, n, planet) == true) {
                r = mid - 0.00000001;
            }
            else{
                l = mid + 0.00000001;
            }
        }
        solutions.push_back(mid);
        acum++;
        
    }
    cout << acum << endl;
    for(i = 0; i < acum; i++) {
        printf("%.3lf ", solutions[i]);
    }
    cout << endl;
    return 0;
}