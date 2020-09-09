class Solution {
public:
    string getNextSequence(string seq) {
        string nextSeq = "";
        int numOcurr = 1;
        char firstInStreak = seq[0];
        for(int i = 1; i < seq.size(); i++) {
            char currentNum = seq[i];
            if(firstInStreak == currentNum) {
                numOcurr++;
            }
            else {
                nextSeq += to_string(numOcurr);
                nextSeq.push_back(firstInStreak);
                numOcurr = 1;
                firstInStreak = currentNum;
            } 
        }
        nextSeq += to_string(numOcurr);
        nextSeq.push_back(firstInStreak);
        return nextSeq;
    }
    string countAndSay(int n) {
        string seq = "1";
        for(int i = 1; i < n; i++) {
            seq = getNextSequence(seq);
        }
        return seq;
    }
};