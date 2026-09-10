class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ct=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0)
            {
                nums[i]=-1;
            }else if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }else if(nums[i]!=ct)
            {
                return ct;
            }else{
                ct++;
            }
        }
        return ct;
    }
};