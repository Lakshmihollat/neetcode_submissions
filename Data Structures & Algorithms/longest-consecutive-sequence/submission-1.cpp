class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1)return 1;
        sort(nums.begin(),nums.end());
        int ct=1;
        int mxct=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)ct++;
            else if(nums[i]==nums[i-1]){
                
            }
            else{
                ct=1;
            }
            mxct=max(mxct,ct);
        }
        return mxct;
    }
};
