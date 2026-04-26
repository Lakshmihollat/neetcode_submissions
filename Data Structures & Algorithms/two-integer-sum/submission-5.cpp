class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(sum+nums[j]==target)
                {

                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
