class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        int times=1;
        for(int i=1;i<=nums.size();i++)
        {
            times=times*i;
        }
        for(int i=0;i<times;i++)
        {
            if(find(res.begin(),res.end(),nums)!=res.end())
            {
                continue;
            }
            res.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return res;
    }
};