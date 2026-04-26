class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        int ct=1;
        int maxct=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==(nums[i-1]+1))
            {
                ct++;
            }else if(nums[i]==nums[i-1])
            { continue;
            }else{
                maxct=max(maxct,ct);
                ct=1;
            }
        }
        maxct=max(maxct,ct);
        return maxct;
    }
};
