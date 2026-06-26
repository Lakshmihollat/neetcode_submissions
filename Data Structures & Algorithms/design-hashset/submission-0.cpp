class MyHashSet {
public:
    MyHashSet() {
    }
    vector<int>nums;
    void add(int key) {
        if(find(nums.begin(),nums.end(),key)==nums.end())
        {
            nums.push_back(key);
        }
    }
    
    void remove(int key) {
        auto f=find(nums.begin(),nums.end(),key);
        if(f!=nums.end())
        {
            nums.erase(f);
        }
    }
    
    bool contains(int key) {
        return find(nums.begin(),nums.end(),key)!=nums.end();
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */