class Solution {
public:
    int updateN(int currentNumber){
        int currentSum = 0;
        while(currentNumber > 0){
            currentSum += (currentNumber%10)*(currentNumber%10);
            currentNumber /= 10;
        }
        return currentSum;
    }
    bool isHappy(int n) {
        unordered_set<int> seenNumbers;
        int digitsInNumber = 0;
        int currentNumber = n;
        
        while(n != 1 && seenNumbers.find(n) == seenNumbers.end()){
            seenNumbers.insert(n);
            n = updateN(n);
        }
        if(n == 1) return true;
        return false;
    }
};
