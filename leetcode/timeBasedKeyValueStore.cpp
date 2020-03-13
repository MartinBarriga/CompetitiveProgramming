class TimeMap {
public:
    /** Initialize your data structure here. */
    map <string, pair<vector<int>, unordered_map<int, string>>> timeMap;
    TimeMap() {
       
    }
    
    int bs(vector<int>& timestamps, int timestamp){
        int l = 0;
        int r = timestamps.size()-1;
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(timestamps[mid] > timestamp){
                r = mid-1;
            }
            else{
                if(mid == timestamps.size()-1 || timestamps[mid+1] > timestamp){
                    return timestamps[mid];
                }
                l = mid+1;
            }
        }
        return timestamps[mid];
    }
    
    void set(string key, string value, int timestamp) {
        if(timeMap.find(key) == timeMap.end()){
            vector<int> auxTimesV;
            unordered_map<int, string> auxTimesM;
            timeMap[key] = make_pair(auxTimesV, auxTimesM);
        }
        timeMap[key].first.push_back(timestamp);
        timeMap[key].second[timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if(timeMap.find(key) == timeMap.end()) return "";
        vector<int> &timestamps = timeMap[key].first;
        unordered_map<int, string> &stampsMap = timeMap[key].second;
        if(stampsMap.find(timestamp) != stampsMap.end()) return stampsMap[timestamp];
        if(timestamps.size() == 0 || timestamps[0] > timestamp) return "";
        int newTimestamp = bs(timestamps, timestamp);
        return stampsMap[newTimestamp];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */