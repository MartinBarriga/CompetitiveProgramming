class Solution {
public:
    
    bool everythingInOrder(vector<vector<int>> &courses, int indexCourse, vector<int> &statusCourse){
        if(statusCourse[indexCourse] == 1) return false;
        if(statusCourse[indexCourse] == 2) return true;
        statusCourse[indexCourse] = 1;
        vector<int> nextCourses = courses[indexCourse];
        for(int index = 0; index < nextCourses.size(); index++){
            int nextCourse = nextCourses[index];
            if(!everythingInOrder(courses, nextCourse, statusCourse)) return false;
        }
        statusCourse[indexCourse] = 2;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> courses(numCourses);
        vector<int> statusCourse(numCourses, 0);
        for(int index = 0; index < prerequisites.size(); index++){
            vector<int> currentPrerequisite = prerequisites[index];
            int course = currentPrerequisite[1];
            int nextCourse = currentPrerequisite[0];
            if(courses[course].empty()){
                vector<int> nextCourses;
                nextCourses.push_back(nextCourse);
                courses[course] = nextCourses;
            }
            else{
                courses[course].push_back(nextCourse);
            }
        }
        for(int indexCourse = 0; indexCourse < numCourses; indexCourse++){
            if(!everythingInOrder(courses, indexCourse, statusCourse)) return false;
        }
        return true;
        
    }
};