class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int left=i+1;
            int right=nums.size()-1;
            int sum=nums[i];
            while(left<right){
            if(sum+nums[left]+nums[right]==0)
            {
                ans.insert({sum,nums[left],nums[right]});
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1])left++;
                while(left<right && nums[right]==nums[right+1])right--;
            }
            else if(sum+nums[left]+nums[right]>0)
            {
                right--;
            }else{
                left++;
            }
            }
        }
        vector<vector<int>>res;
        for(auto &p : ans)
        {
            res.push_back(p);
        }
        return res;
    }
};
