#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>
using namespace std;
int main(){
    string first, newOne, generated1, generated2;
    unordered_set<string> seenGenerateds;
    vector<string> combsOfA;
    int n, size, tam;
    cin >> n >> size;
    cin >> first;
    combsOfA.push_back(first);
    seenGenerateds.insert(first);
    for(int i = 1; i < n; i++){
        cin >> newOne;
        bool inserted = true;
        while(inserted){
            inserted = false;
            tam = combsOfA.size();
            for(int index = 0; index < tam; index++){
                generated1 = combsOfA[index];
                generated2 = newOne;
                for(int j = 0; j < size; j++){
                    generated1[j] = newOne[j];
                    generated2[j] = first[j];
                    if(seenGenerateds.find(generated1) == seenGenerateds.end()){
                        bool inserted = true;
                        seenGenerateds.insert(generated1);
                        combsOfA.push_back(generated1);
                    }
                    if(seenGenerateds.find(generated2) == seenGenerateds.end()){
                        bool inserted = true;
                        seenGenerateds.insert(generated2);
                        combsOfA.push_back(generated2);
                    }
                }
            }
        }        
    }
    cout << seenGenerateds.size() << endl;
    return 0;
}