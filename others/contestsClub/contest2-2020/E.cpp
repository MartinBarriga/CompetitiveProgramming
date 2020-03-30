#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num, lastNum, amount = 1, max = 1;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(i > 0){
            if(num >= lastNum){
                amount++;
                if(amount > max){
                    max = amount;
                }
            }
            else{
                amount = 1;
            }
        }
        lastNum = num;
    }
    cout << max << endl;

    return 0;
}