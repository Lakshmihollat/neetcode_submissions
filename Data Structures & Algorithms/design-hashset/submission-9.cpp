class MyHashSet {
public:
    vector<int>ans;//(1000001,-1);
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(ans.begin(),ans.end(),key)==ans.end())
        {
            ans.push_back(key);
        }
    }
    
    void remove(int key) {
        if(find(ans.begin(),ans.end(),key)!=ans.end()){
        auto f = find(ans.begin(),ans.end(),key);
        ans.erase(f);}
    }
    
    bool contains(int key) {
        return find(ans.begin(),ans.end(),key)!=ans.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */