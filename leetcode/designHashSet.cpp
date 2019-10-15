class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<bool> hashTable;

    MyHashSet() {
        hashTable.assign(1000001, false);
    }
    
    void add(int key) {
        hashTable[key] = true;
    }
    
    void remove(int key) {
        hashTable[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(hashTable[key] == true) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */