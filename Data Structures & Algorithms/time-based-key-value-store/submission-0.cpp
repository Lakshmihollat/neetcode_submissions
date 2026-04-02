class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> map;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // Early exit: key doesn't exist or target is earlier than any records
        if(map.find(key) == map.end() || map[key].front().first > timestamp){
            return "";
        } else {
            // Use reference to avoid copying the vector
            const auto& vec = map[key];
            int l = 0, r = vec.size() - 1;
            
            while(l < r){
                // Ceiling mid to prevent infinite loop when l = m
                int m = l + (r - l + 1) / 2;
                if(vec[m].first > timestamp){
                    r = m - 1;
                } else {
                    l = m;
                }
            }
            return vec[l].second;
        }
    }
};