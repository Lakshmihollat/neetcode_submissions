class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string k=strs[i];
            sort(k.begin(),k.end());
            if(mp.count(k))
            {
                mp[k].push_back(strs[i]);
            }else{
                mp[k].push_back(strs[i]);
            }
        }
        for(auto &p : mp)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};
