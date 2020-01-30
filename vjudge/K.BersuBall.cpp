#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int numBoys, numGirls, bIndex = 0, gIndex = 0, numPairs = 0;
    cin >> numBoys;
    vector<int> boys(numBoys);
    for (int i = 0; i < numBoys; i++)
    {
        cin >> boys[i];
    }
    cin >> numGirls;
    vector<int> girls(numGirls);
    for (int i = 0; i < numGirls; i++)
    {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    while (bIndex < numBoys && gIndex < numGirls)
    {
        if (boys[bIndex] == girls[gIndex])
        {
            numPairs++;
            bIndex++;
            gIndex++;
        }
        else if (boys[bIndex] < girls[gIndex])
        {
            if (boys[bIndex] + 1 == girls[gIndex])
            {
                numPairs++;
                bIndex++;
                gIndex++;
            }
            else
            {
                bIndex++;
            }
        }
        else
        {
            if (boys[bIndex] == girls[gIndex] + 1)
            {
                numPairs++;
                bIndex++;
                gIndex++;
            }
            else
            {
                gIndex++;
            }
        }
    }
    cout << numPairs << endl;
    return 0;
}