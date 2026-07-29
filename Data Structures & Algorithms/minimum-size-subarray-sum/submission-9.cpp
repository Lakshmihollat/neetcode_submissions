class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int minlength=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right];
            if(sum>=target)
            {
                minlength=min(minlength,right-left+1);
                while(left<=right && sum>=target)
                {
                    minlength = min(minlength, right-left+1);
                    sum=sum-nums[left];
                    left++;
                }
            }
            right++;
        }
        return minlength==INT_MAX?0:minlength;
    }
};