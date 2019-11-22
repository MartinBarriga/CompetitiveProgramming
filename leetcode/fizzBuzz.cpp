class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> solution;
        string word;
        for(int currentNum = 1; currentNum <= n; currentNum++){
            if(currentNum % 3 == 0 && currentNum % 5 == 0){
                word = "FizzBuzz";
            }
            else if(currentNum % 3 == 0){
                word = "Fizz";
            }
            else if(currentNum % 5 == 0){
                word = "Buzz";
            }
            else{
                word = to_string(currentNum);
            }
            solution.push_back(word);
        }
        return solution;
    }
};