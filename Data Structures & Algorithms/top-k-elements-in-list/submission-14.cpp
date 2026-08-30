class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(), []
        (const pair<int,int>&a , const pair<int,int>&b) {
            return a.second>b.second;
        });
        vector<int>ans;
        int ct=0;
        for(auto &p : vec)
        {
            if(ct<k){
                ans.push_back(p.first);
                ct++;
            }
        }
        return ans;
    }
};
