class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>n;
        for(int i=0;i<nums.size();i++)
        {
            int sum=target-nums[i];
            if(n.count(sum))
            {
                return { n[sum], i};
            }
            n[nums[i]]=i;
        }
        return {-1,-1};
    }
};
