#include <iostream>
#include <vector>
using namespace std;
int main(){
    int numberOfViews, numberOfVisits, currentSum = 0, maxSum = 0, firstViewSeen = 0, secondViewSeen = 1;
    int lastSeenView;
    cin >> numberOfViews >> numberOfVisits;
    vector<int> view(numberOfViews);
    cin >> view[0];
    lastSeenView = view[0];
    for(int i = 1; i < numberOfViews; i++){
        cin >> view[i];
        if(i < numberOfVisits) {
          currentSum += view[i] - lastSeenView;
        	lastSeenView = view[i];
        }
    }
    maxSum = currentSum;
    for(int i = numberOfVisits; i < numberOfViews; i++){
        currentSum += view[i] - lastSeenView;
        currentSum -= view[secondViewSeen] - view[firstViewSeen];
        lastSeenView = view[i];
        secondViewSeen++;
        firstViewSeen++;
        if(currentSum > maxSum) maxSum = currentSum;
    }
    if(numberOfVisits > 1) cout << maxSum << endl;
    else cout << 0 << endl;
    return 0;
}