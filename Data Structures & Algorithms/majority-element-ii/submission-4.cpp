class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))mp[nums[i]]++;
            else mp[nums[i]]=1;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(), v.end(), []
        (const pair<int,int>&a , const pair<int,int>&b)
        {
            return a.second>b.second;
        });
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second>(nums.size()/3))
            {
                ans.push_back(v[i].first);
            }else{
                break;
            }
        }
        return ans;
    }
};