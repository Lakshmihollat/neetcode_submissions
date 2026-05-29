class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>results;
        for(auto &s : strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            if(results.count(k))
            {
                results[k].push_back(s);
            }else{
                results[k].push_back(s);
            }
        }
        for(auto &m:results)
        {
            ans.push_back(m.second);
        }
        return ans;
    }
};
