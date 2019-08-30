#include <iostream>
#include <vector>
using namespace std;
vector<int> value;
vector<int> weight;
vector<int> col(10001,-1);
vector< vector<int> > calculated(101, col);
int n;
int dp(int capacity, int index){
    if(index == n){
        return 0;
    }
    if(calculated[index][capacity] == -1){
        if(weight[index] > capacity) calculated[index][capacity] = dp(capacity, index+1);
        else{
            long long int yes = dp(capacity - weight[index], index) + value[index];
            long long int no = dp(capacity, index+1);
            calculated[index][capacity] = max(yes, no );
        }
    }
    return calculated[index][capacity];
    
}
int main(){
    int capacity, newValue, newWeight;
    
    cin >> n >> capacity;
    for(int i = 0; i < n; i++){
        cin >> newValue >> newWeight;
        value.push_back(newValue);
        weight.push_back(newWeight);
    }
    cout << dp(capacity, 0) << endl;

    return 0;
}