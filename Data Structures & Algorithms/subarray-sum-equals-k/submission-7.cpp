class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*int res = 0, curSum = 0;
        unordered_map<int, int> prefixSums;
        prefixSums[0] = 1;
        for (int num : nums) {
            curSum += num;
            int diff = curSum - k;
            res += prefixSums[diff];
            prefixSums[curSum]++;
        }
        return res;*/
        int res=0;
        int currsum=0;
        unordered_map<int,int>prefixsums;
        prefixsums[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            int diff=currsum-k;
            res+=prefixsums[diff];
            prefixsums[currsum]++;
        }
        return res;
    }
};