class MyHashSet {
public:
    vector<int>ans;
    MyHashSet() {
        vector<int>ans;
    }
    
    void add(int key) {
        if(find(ans.begin(),ans.end(),key)==ans.end())
            ans.push_back(key);
    }
    
    void remove(int key) {
        auto f = find(ans.begin(),ans.end(),key);
        if(f!=ans.end())
        {
            ans.erase(f);
        }
    }
    
    bool contains(int key) {
        return (find(ans.begin(),ans.end(),key)!=ans.end());
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */