#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    double n, left, right, height = 0, base = 0;
    cin >> n;
    vector<double> heights;
    vector<double> bases;
    for(int i = 0; i < n; i++){
        cin >> left >> right;
        height += left;
        heights.push_back(height);
        height -= right;
        base+= left;
        bases.push_back(base);
        base+= right;
    }
    vector<double> mountainsICanSee;
    vector<double> mountainsICover;
    //cout << "HEIUGHTS" << endl;
    /*for(int i = 0; i < n; i++){
        cout << heights[i] << " "<< bases[i] << endl;
    }*/
    //cout << "FIN DE TAMS" << endl;
    double proportion, currentHeight;
    cout << "0" << endl;
    for(int i = 1; i < n; i++){
        double m = (heights[i-1] - heights[i])/(bases[i-1] - bases[i]);
        mountainsICanSee.push_back(i);
        
        
        for(int j = i-2; j >= 0; j--){
            double y = m*bases[j] - m*bases[i] + heights[i];
            if(heights[j] < y) continue;
            mountainsICanSee.push_back(j+1);
            m = (heights[j] - heights[i])/(bases[j] - bases[i]);
        }
        reverse(mountainsICanSee.begin(), mountainsICanSee.end());
        cout << mountainsICanSee.size() << " ";
        for(int j = 0; j < mountainsICanSee.size(); j++){
            cout << mountainsICanSee[j] << " ";
        }
        cout << endl;
        mountainsICanSee.clear();
    }
    return 0;
}