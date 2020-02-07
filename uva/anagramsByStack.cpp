#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
vector<string> answ;
void combinations(int iCounter, int oCounter, string currentCombination, string& word1, string &word2, int maxSize, int word2Index, int word1Index, stack<char> theStack){
    if(iCounter == maxSize && oCounter == maxSize){
        answ.push_back(currentCombination);
    }
    if(iCounter > maxSize){
        return;
    } 
    currentCombination.push_back('i');
    theStack.push(word1[word1Index]);
    combinations(iCounter+1, oCounter, currentCombination, word1, word2, maxSize,word2Index, word1Index+1, theStack);
    theStack.pop();
    currentCombination.pop_back();
    if(oCounter == iCounter) return;
    if(word2[word2Index] == theStack.top()){
        currentCombination.push_back('o');
        theStack.pop();
        combinations(iCounter, oCounter+1, currentCombination, word1, word2, maxSize, word2Index+1, word1Index, theStack);
    }
    
}
int main(){
    string word1, word2, currentCombination;
    stack<char> theStack;
    while (cin >> word1 && cin >> word2)
    {
        answ.clear();
        currentCombination = "";
        cout << '[' << endl;
        if(word1.size() != word2.size()) {
            cout << ']' << endl;
            continue;
        }
        combinations(0,0, currentCombination, word1, word2, word1.size(), 0, 0, theStack);
        for(int i = 0; i < answ.size(); i++){
            for(int j = 0; j < answ[i].size(); j++){
                cout << answ[i][j];
                if(j < answ[i].size()-1) cout << " ";
            }
            cout << endl;
        }
        cout << ']' << endl;
    }
    return 0;
}