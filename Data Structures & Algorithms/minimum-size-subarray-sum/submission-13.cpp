class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int sum=0;
        int minlen=INT_MAX;
        while(r!=nums.size())
        {
            sum+=nums[r];
            if(sum>=target)
            {
                minlen=min(minlen,r-l+1);
            }
            while(sum>=target && l<=r)
            {
                sum=sum-nums[l];
                l++;
                if(sum>=target)
            {
                minlen=min(minlen,r-l+1);
            }
            }
            r++;
        }
        return minlen==INT_MAX?0 : minlen=min(minlen,r-l+1);
    }
};