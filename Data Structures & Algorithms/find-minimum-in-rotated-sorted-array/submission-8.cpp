class Solution {
public:
    int findMin(vector<int> &nums) {
        //return *min_element(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        int mid=(left+right)/2;
        int m=nums[0];
        while(left<right)
        {
            mid=(left+right)/2;
            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return nums[left];
    }
};
