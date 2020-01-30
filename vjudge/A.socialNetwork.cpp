#include <iostream>
#include <deque>
#include <set>
using namespace std;

int main()
{
    int numMessages, availableSpace, newMessageId, amountOfMessages = 0;
    set<long long int> currentMessagesId;
    deque<long long int> messages;
    cin >> numMessages >> availableSpace;
    for (int i = 0; i < numMessages; i++)
    {
        cin >> newMessageId;
        if (currentMessagesId.count(newMessageId) == 0)
        {
            currentMessagesId.insert(newMessageId);
            messages.push_front(newMessageId);
            amountOfMessages++;
            if (amountOfMessages > availableSpace)
            {
                int lastIdMessage = messages.back();
                messages.pop_back();
                currentMessagesId.erase(lastIdMessage);
                amountOfMessages--;
            }
        }
    }
    cout << amountOfMessages << endl;
    for (int i = 0; i < amountOfMessages; i++)
    {
        cout << messages[i] << " ";
    }
    cout << endl;
    return 0;
}