class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum=0;
        int i=0;
        sort(nums.begin(),nums.end());
        int left=i+1;
        vector<vector<int>>ans;
        int right=nums.size()-1;
       for(int i=0;i<nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicate i

            left=i+1;
            right=nums.size()-1;
        while(left<right)
        {
            sum=nums[i];
            if(sum+nums[left]+nums[right]==0)
            {
                ans.push_back({sum,nums[left],nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            }
            else if(sum+nums[left]+nums[right]>0)
            {
                right--;
            }else if(sum+nums[left]+nums[right]<0)
            {
                left++;
            }

        }
        }
        return ans;
    }
};
