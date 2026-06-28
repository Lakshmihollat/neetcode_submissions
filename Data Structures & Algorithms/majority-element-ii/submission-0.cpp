class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
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
        vector<int>ans;
        for(auto &p : mp)
        {
            if(p.second >nums.size()/3)
            {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};