class Solution {
public:
    void traverse(int currentFriend, vector<bool>& paintedFriends, vector<vector<int>>& friends){
        if(paintedFriends[currentFriend] ) return;
        paintedFriends[currentFriend] = true;
        vector<int> nextFriends = friends[currentFriend];
        for(int index = 0; index < nextFriends.size(); index++){
            if(nextFriends[index] == 1) {
                traverse(index, paintedFriends, friends);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        vector<bool> paintedFriends(M.size(), false);
        int amountOfGroups = 0;
        for(int currentFriend = 0; currentFriend < M.size(); currentFriend++){
            if(paintedFriends[currentFriend] == false){
                traverse(currentFriend, paintedFriends, M);
                amountOfGroups++;
            }
        }
        return amountOfGroups;
    }
};