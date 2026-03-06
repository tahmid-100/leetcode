class MyHashSet {
public:

vector<list<int>>table;
    MyHashSet():table(1000) {
        
    }

    int hash(int key){

        return key % table.size();
    }
    
    void add(int key) {

        int h=hash(key);

        for(auto &it:table[h]){
            if(it==key) return;
        }

        table[h].push_back(key);
        
    }
    
    void remove(int key) {

        int h=hash(key);

        auto& b= table[h];

        for(auto it=b.begin();it!=b.end();++it){
            if(*it==key){
              table[h].erase(it);
              return;
            }
        }
        
    }
    
    bool contains(int key) {
        int h=hash(key);

        for(auto &it:table[h]){
            if(it==key) return true;
        }

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