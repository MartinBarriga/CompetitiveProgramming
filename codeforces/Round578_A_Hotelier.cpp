#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nEvents, roomIndex;
    string memory;
    vector<int> room(10, 0);
    cin >> nEvents;
    cin >> memory;
    for(int i = 0; i < nEvents; i++){
        if(memory[i] == 'L'){
            roomIndex = 0;
            while(room[roomIndex] != 0) roomIndex++;
            room[roomIndex] = 1;
        }
        else if(memory[i] == 'R'){
            roomIndex = 9;
            while(room[roomIndex]!= 0) roomIndex--;
            room[roomIndex] = 1;
        }
        else{
            roomIndex = memory[i] - '0';
            room[roomIndex] = 0; 
        }
    }
    for(int i = 0; i < 10; i++) cout << room[i];
    cout << endl; 
    return 0;
}