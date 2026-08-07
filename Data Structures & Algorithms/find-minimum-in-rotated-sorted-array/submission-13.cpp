class Solution {
public:
    int findMin(vector<int> &nums) {
        return *min_element(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        int res=nums[0];
        while(low<=high)
        {
            if(nums[low]<nums[high])
            {
                res=min(res,nums[low]);
                break;
            }
            int m = low+(high-low)/2;
            res = min(res, nums[m]);
            if(nums[m]>=nums[low])
            {
                low=m+1;
            }else{
                high=m-1;
            }
        }
        return res;
    }
};
