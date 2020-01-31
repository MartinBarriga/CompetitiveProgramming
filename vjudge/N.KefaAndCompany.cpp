#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int numFriends, moneyDifference, friendship, money;
    long long int greaterFriendshipAm = -1;
    vector<pair<int, int> > friends;
    cin >> numFriends >> moneyDifference;
    for(int i = 0; i < numFriends; i++){
        cin >> money >> friendship;
        friends.push_back(make_pair(money, friendship));
    }
    sort(friends.begin(), friends.end());
    int begin = 0, end = 0, currentMoneyDiff = 0;
    long long int friendshipAmount = 0;
    while(end < friends.size()){
        currentMoneyDiff = friends[end].first - friends[begin].first;
        if(currentMoneyDiff < moneyDifference){
            friendshipAmount += friends[end].second;
            if(friendshipAmount > greaterFriendshipAm){
                greaterFriendshipAm = friendshipAmount;
            }
            end++;
        }
        else{
            friendshipAmount -= friends[begin].second;
            begin++; 
        }
    }
    cout << greaterFriendshipAm;
    return 0;
}