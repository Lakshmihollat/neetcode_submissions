class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>words;
        for(auto &s : strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            words[k].push_back(s);
        }
        for(auto &p : words)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};
