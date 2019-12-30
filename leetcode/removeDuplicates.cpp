class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> seenLetters;
        string SWithoutDuplicates;
        for(int index = 0; index < S.size(); index++){
            if(!seenLetters.empty() && seenLetters.top() == S[index]){             
                seenLetters.pop();    
            }
            else{
                seenLetters.push(S[index]);
            }
        }

        while(!seenLetters.empty()){
            SWithoutDuplicates.insert(SWithoutDuplicates.begin(), seenLetters.top());
            seenLetters.pop();
        }
        return SWithoutDuplicates;
    }
};