class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];
            if(mp.count(rem))
            {
                return {mp[rem],i};
            }else{
                mp[nums[i]] = i;
            }
        }
        return {-1,-1};*/
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(mp.count(temp))
            {
                return { mp[temp],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
