//380. Insert Delete GetRandom O(1)

class RandomizedSet {
public:
    unordered_map<int,int> valToIndex;
    vector<int> vals;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {

        if(valToIndex.count(val)) return false;

        valToIndex[val] = vals.size();
        vals.push_back(val);
        return true;
        
    }
    
    bool remove(int val) {

        if(!valToIndex.count(val)) return false;

        int index = valToIndex[val];
        valToIndex[vals.back()] = index;
        valToIndex.erase(val);

        vals[index] = vals.back();
        vals.pop_back();
        return true;
        
    }
    
    int getRandom() {
        int index = rand()%vals.size();
        return vals[index];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
