class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> list1Map;
        int maxIndexSum = INT_MAX;
        vector<string> commonRestaurants;
        int index;
        for(index = 0; index < list1.size(); index++){
            string restaurant = list1[index];
            list1Map[restaurant] = index;
        }
        for(index = 0; index < list2.size(); index++){
            string restaurant = list2[index];
            if(list1Map.count(restaurant) == 1){  
                if(maxIndexSum > list1Map[restaurant] + index){
                    maxIndexSum = list1Map[restaurant] + index;
                    commonRestaurants.clear();
                    commonRestaurants.push_back(restaurant);
                }
                else if(maxIndexSum == list1Map[restaurant] + index){
                    commonRestaurants.push_back(restaurant);
                }
            }
        }
        return commonRestaurants;
    }
};