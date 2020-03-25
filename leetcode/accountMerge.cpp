class Solution {
public:
    int find(int node, vector<int> &nodes){
        if(nodes[node] == node) return node;
        return nodes[node] = find(nodes[node], nodes);
    }
    void union_(int account, int mailNode, vector<int> &nodes){
        int accountFather = find(account, nodes);
        int mailFather = find(mailNode, nodes);
        nodes[mailFather] = nodes[accountFather];
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string, int> emails;
        int currentId = 0;
        for(int account = 0; account < accounts.size(); account++){
            for(int mail = 1; mail < accounts[account].size(); mail++){
                string currentMail = accounts[account][mail];
                if(emails.find(currentMail) == emails.end()){
                    emails[currentMail] = currentId;
                    currentId++;
                }
            }
        }
        int numberOfAccounts = currentId;
        vector<int> nodes(numberOfAccounts + accounts.size());
        for(int index = 0; index < nodes.size(); index++){
            nodes[index] = index;
        }
        for(int account = 0; account < accounts.size(); account++){
            for(int mail = 1; mail < accounts[account].size(); mail++){
                int mailNode = emails[accounts[account][mail]];
                union_(account + numberOfAccounts, mailNode, nodes);
            }
        }
        vector<vector<string>> mergedAccounts(accounts.size());
        for(auto it = emails.begin(); it != emails.end(); it++){
            string currentMail = (*it).first;
            int currentMailId = (*it).second;
            int accountIndex = find(currentMailId, nodes) - numberOfAccounts;
            if(mergedAccounts[accountIndex].empty()){
                mergedAccounts[accountIndex].push_back(accounts[accountIndex][0]);
            }
            mergedAccounts[accountIndex].push_back(currentMail);
        }
        accounts.clear();
        for(int index = 0, accountsIndex = 0; index < mergedAccounts.size(); index++){
            if(mergedAccounts[index].size() > 0){
                accounts.push_back(mergedAccounts[index]);
                sort(accounts[accountsIndex].begin()+1, accounts[accountsIndex].end());
                accountsIndex++;
            }
        }
        return accounts;
    }
};