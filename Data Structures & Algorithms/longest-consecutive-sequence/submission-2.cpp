class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mxct=0;
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        int ct=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }else if(nums[i]==nums[i+1]-1)
            {
                ct++;
            }else{
                mxct=max(mxct,ct);
                ct=1;
            }
        }
        mxct=max(mxct,ct);
        return mxct;
    }
};
