class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0;
        int left=0,right=0;
        int maxlength=INT_MAX;
        while(right<nums.size() && left<=right)
        {
            s+=nums[right];
                right++;
            while(s>=target)
            {
                maxlength=min(maxlength,right-left);
                s=s-nums[left];
                left++;
            }

        }
        if(maxlength==INT_MAX)
        {
            return 0;
        }return maxlength;
    }
};