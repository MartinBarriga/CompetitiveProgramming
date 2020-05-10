class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<pair<bool,int>> persons(N+1, pair<bool,int>(false, 0));
        int judgePosition = -1;
        int amountOfPeopleNotTrusted = 0;
        for(int i = 0; i < trust.size(); i++){
            int currentPerson = trust[i][0];
            int trustedPerson = trust[i][1];
            persons[currentPerson].first = true;
            persons[trustedPerson].second++;
        }
        for(int i = 1; i <= N; i++){
            if(!persons[i].first && persons[i].second == N-1){
                judgePosition = i;
            }
        }
        return judgePosition;
    }
};