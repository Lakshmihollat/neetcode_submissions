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
        int res=0, currsum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int num : nums)
        {
            currsum+=num;
            int diff=currsum-k;
            res+=mp[diff];
            mp[currsum]++;
        }
        return res;
    }
};