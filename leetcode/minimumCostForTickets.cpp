class Solution {
public:
    vector<int> dp;
    int bs(int val, vector<int> days){
        int l = 0;
        int r = days.size()-1;
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(days[mid] == val) return mid;
            if(days[mid] > val){
                if(mid == 0 ||days[mid-1] < val) return mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int getCost(int index, vector<int>&days, vector<int>& costs){
        if(index == -1) return 0;
        if(dp[index] == -1){
            int oneDay = costs[0] + getCost(bs(days[index]+1, days), days, costs);
            int sevenDays = costs[1] + getCost(bs(days[index]+7, days), days, costs);
            int thirtyDays = costs[2] + getCost(bs(days[index]+30, days), days, costs);
            dp[index] =  min(oneDay, min(sevenDays, thirtyDays));
        }
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.assign(days.size(), -1);
        return getCost(0, days, costs);
    }
};