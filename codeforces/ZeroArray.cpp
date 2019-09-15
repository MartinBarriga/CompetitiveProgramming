#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, lastNumber;
	long long int sum = 0;
	cin >> n;
	vector<int> numbers(n);
	for(int i = 0; i < n; i++){
		cin >> numbers[i];
		sum+= numbers[i];
	}
	sort(numbers.begin(), numbers.end());
	if(sum %2 == 0 && numbers[n-1] <= sum - numbers[n-1] ){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
    return 0;
}