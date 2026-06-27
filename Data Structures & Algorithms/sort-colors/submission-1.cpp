class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       vector<int>ans(3,0);
       for(int i=0;i<nums.size();i++)
       {
        ans[nums[i]]++;
       }
       int ind=0;
       for(int i=0;i<3;i++)
       {
        
        for(int j=0;j<ans[i];j++)
        {
            nums[ind++]=i;
        }
       }
    }
};