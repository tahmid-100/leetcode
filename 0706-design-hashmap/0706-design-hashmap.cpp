class MyHashMap {
public:
    vector<list<pair<int,int>>>table;
    MyHashMap():table(1000) {
         
    }

    int hash(int key){
        return key % table.size();
    }
    
    void put(int key, int value) {
        int h=hash(key);

        for(auto& x : table[h]){
            if(x.first==key){
                x.second=value;
                return;

            }
        }

        table[h].push_back({key,value});
    }
    
    int get(int key) {
       int h=hash(key);

       for(auto it:table[h]){
           if(it.first==key) return it.second;
       }

       return -1;
    }
    
    void remove(int key) {
         int h=hash(key);

        auto& bucket = table[h];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                return;  
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */