#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    long long int n, currentNum = 1, newNum, amountOfSums = 0;
    map<long long int, long long int> seenNums;
    vector<long long int> powerTwoNums;
    while (currentNum <= 2000000000)
    {
        powerTwoNums.push_back(currentNum);
        currentNum *= 2;
    }
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        cin >> newNum;
        for (long long int j = 0; j < powerTwoNums.size(); j++)
        {
            //cout << "comparing " << newNum << " with " << powerTwoNums[j] << endl;
            long long int numberToSearch = powerTwoNums[j] - newNum;
            if (seenNums.find(numberToSearch) != seenNums.end())
            {
                amountOfSums = amountOfSums + seenNums[numberToSearch];
            }
        }
        if (seenNums.find(newNum) != seenNums.end())
        {
            seenNums[newNum]++;
        }
        else
        {
            seenNums[newNum] = 1;
        }
    }
    cout << amountOfSums << endl;
    return 0;
}