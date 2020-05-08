class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float currentM, wantedM, lastX, lastY;
        for(int i = 0; i < coordinates.size(); i++){
            float x = coordinates[i][0];
            float y = coordinates[i][1];
            if(i > 0){
                currentM = (y - lastY) / (x - lastX);
                if(i == 1){
                    wantedM = currentM;
                }
                else if(wantedM != currentM){
                    return false;
                }
            }
            lastX = x;
            lastY = y;
        }
        return true;
    }
};