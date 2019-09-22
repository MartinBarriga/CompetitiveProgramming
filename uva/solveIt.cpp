#include <iostream>
#include <math.h>
using namespace std;
double euler(double n)
{
    return pow((2.71828182845904523536), n);
}
double formulaRes;
double solve(double p, double q, double r, double s, double t, double u){
    double left = 0, right = 1, mid;
    while(left <= right){
        mid =(left+right)/2;
        //cout << mid << " ";
        formulaRes = p*euler(mid*-1) + q*sin(mid) + r*cos(mid) + s*tan(mid) + t* mid*mid + u;
        //cout << formulaRes << endl;
        if(formulaRes > 0){
            left = mid + 0.00000001;;
        }
        else {
            right = mid - 0.00000001;;
        }
    }
    return mid;
}
int main(){
    double p, q, r, s, t, u, res;
    
    while(cin >> p){
        cin >> q >> r >> s >> t >> u;
        res = solve(p, q, r, s, t, u);
        if(formulaRes > -0.0001 && formulaRes < 0.0001){
            printf("%.4lf", res);
        }
        else{
            printf("No solution");
        }
        cout << endl;
        
    }

    return 0;
}