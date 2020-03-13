class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> numberOfPrereq(numCourses, 0);
        vector<vector<int>> nextCourses(numCourses, vector<int>());
        queue<int> coursesWithZeroDep;
        vector<int> answ;
        for(int index = 0; index < prerequisites.size(); index++){
            int nextCourse = prerequisites[index][0];
            int currentCourse = prerequisites[index][1];
            numberOfPrereq[nextCourse]++;
            nextCourses[currentCourse].push_back(nextCourse);
        }
        for(int course = 0; course < numCourses; course++){
            if(numberOfPrereq[course] == 0){
                coursesWithZeroDep.push(course);
            }
        }
        
        while(!coursesWithZeroDep.empty()){
            int currentCourse = coursesWithZeroDep.front();
            coursesWithZeroDep.pop();
            answ.push_back(currentCourse);
            for(int index = 0; index < nextCourses[currentCourse].size(); index++){
                int nextCourse = nextCourses[currentCourse][index];
                numberOfPrereq[nextCourse]--;
                if(numberOfPrereq[nextCourse] == 0){
                    coursesWithZeroDep.push(nextCourse);
                }
            }
        }
        if(answ.size() !=  numCourses) answ.clear();
        return answ;
    }
};