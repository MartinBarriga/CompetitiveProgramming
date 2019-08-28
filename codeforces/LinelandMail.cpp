#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, element, first, last, maximum, minimum, actualCity, prevCity, nextCity;
    vector<int> city;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> element;
        city.push_back(element);
    }
    first = city[0];
    last = city[n-1];
    cout << abs(city[0] - city[1]) << " " << abs(city[0] - last) << endl;
    for(int i = 1; i < n-1; i++){
        actualCity = city[i];
        nextCity = city[i+1];
        prevCity = city[i-1];
        maximum = max(abs(actualCity - first), abs(actualCity - last));
        minimum = min(abs(actualCity - prevCity), abs(actualCity - nextCity));
        cout << minimum << " " << maximum << endl;
    }
    cout << abs(city[n-1] - city[n-2]) << " " << abs(city[n-1] - first) << endl;
    return 0;
}