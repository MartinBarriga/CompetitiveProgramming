#include <iostream>
using namespace std;
int main(){
    int t, tcase, n, backpack, k,i, initialBlocks, quitedBlocks, newBlockQuantity;
    bool flag;
    cin >> t;
    for(int tcase = 0; tcase < t; tcase++){
        cin >> n >> backpack >> k;
        int block[n];
        for(i = 0; i < n; i++) cin >> block[i];
        for(i = 0; i < n-1; i++){
            flag = false;
            initialBlocks = block[i];
            while(block[i]-1 >= 0){
                if(abs((block[i] -1) - block[i+1]) <= k){
                    flag = true;
                    newBlockQuantity  = block[i]-1;
                }
                block[i]--;
            }
            if(flag == false){
                block[i] = initialBlocks;
                if(abs(block[i] - block[i+1]) <= k) {
                    flag = true;
                    continue;
                }
                while(backpack-1 >= 0){
                    if(abs((block[i] + 1) - block[i+1]) <= k){
                         flag = true;
                         backpack--;
                         block[i]++;
                         break;
                    }
                    backpack--;
                    block[i]++;
                }
            }
            else{
                //block[i] = initialBlocks - quitedBlocks;
                block[i] = newBlockQuantity;
                backpack+= (initialBlocks - block[i]);

            }
            if(flag == false) {
                cout << "NO" << endl;
                break; 
            }
        }
        if(flag == true || n == 1){
            cout << "YES" << endl;
        }
    }
    return 0;
}