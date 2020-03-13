class Solution {
public:
    
    int find(int currentNode, vector<int>& nodes){
        if(nodes[currentNode] == currentNode) return currentNode;
        nodes[currentNode] = find(nodes[currentNode], nodes);
        return nodes[currentNode];
    }
    
    void unionn (int node1, int node2, vector<int>& nodes){
        int father1 = find(node1, nodes);
        int father2 = find(node2, nodes);
        nodes[father1] = father2;
    }
    
    bool areSentencesSimilarTwo(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        if(words1.size() != words2.size()) return false;
        int currentNumWord = 0;
        string word1, word2;
        map<string, int> seenWords;
        for(int index = 0; index < pairs.size(); index++){
            word1 = pairs[index][0];
            word2 = pairs[index][1];
            if(seenWords.find(word1) == seenWords.end()){
                seenWords[word1] = currentNumWord++;
            }
            if(seenWords.find(word2) == seenWords.end()){
                seenWords[word2] = currentNumWord++;
            }     
        }
        
        int totalNodes = currentNumWord + pairs.size();
        vector<int> nodes(totalNodes);
        for(int currentNode = 0; currentNode < totalNodes; currentNode++){
            nodes[currentNode] = currentNode;
        }
        
        for(int index = 0; index < pairs.size(); index++){
            word1 = pairs[index][0];
            word2 = pairs[index][1];
            int groupNode = index;
            unionn(seenWords[word1], seenWords[word2], nodes);
           // unionn(seenWords[word2], groupNode + currentNumWord, nodes);
        }
        
        for(int index = 0; index < words1.size(); index++){
            if(words1[index].compare(words2[index]) == 0) continue;
            int currentWord1, currentWord2;
            if(seenWords.find(words1[index]) != seenWords.end()) 
                currentWord1 = seenWords[words1[index]];
            else
                return false;
            if(seenWords.find(words2[index]) != seenWords.end())
                currentWord2 = seenWords[words2[index]];
            else
                return false;
            
            int parent1 = find(currentWord1, nodes);
            int parent2 = find(currentWord2, nodes);
            if(parent1 != parent2) return false;
        }
        return true;
    }
};