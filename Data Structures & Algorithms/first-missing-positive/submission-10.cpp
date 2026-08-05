class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)nums[i]=0;
        }
        int i=1;
        while(i)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())return i;
            i++;
        }
        return i;
    }
};