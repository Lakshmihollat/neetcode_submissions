class Solution {
public:
    int majorityElement(vector<int>& nums) {
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
        int max=0;
        int mxct=0;
        for(auto& p : mp)
        {
            if(p.second>mxct)
            {

                mxct=p.second;
                max=p.first;
            }
        }

        return max;
    }
};