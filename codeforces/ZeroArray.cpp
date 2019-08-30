
 #include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int n, entry, aux;
	long long int sum = 0;
	deque<int> number;
	bool even, equals;
	cin >> n;
	for(int i = 0; i < n; i++){
	    cin >> entry;
	    sum += entry;
	    number.push_back(entry);
	}
	if(sum%2 == 0) even = true;
	else even = false;
	
	
	sort(number.begin(), number.end());
	while(number.size() > 1){
        equals = true;
            for(int i = number.size()-2; i>= 0; i--){
                if(number.back() != number[i]) equals = false;
            }
            if(equals == true) {
                if(number.size()%2 != 0 && number[0] == 1){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                }
                return 0;
            }
	    if(number[number.size()-1] > number[0]){
	        number[number.size()-1] -= number[0];
	        number.pop_front();
	    }
	    else if(number[number.size()-1] < number[0]){
	        aux = number.back();
	        number.pop_back();
	        number.push_front(aux);
	    }
	    else {
            aux = number.back();
            number.pop_back();
            number.push_front(aux);
            
	        
	    }
	    
	}
	if(number.size() == 0 && even == true){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}
 
	return 0;
}