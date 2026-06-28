class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        sort(nums.begin(),nums.end());
        int ct=1;
        int maxct=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }else if(nums[i]==nums[i-1]+1)
            {
                ct++;
            }else{
                maxct = max(maxct,ct);
                ct=1;
            }
        }
        return maxct=max(maxct,ct);
    }
};
