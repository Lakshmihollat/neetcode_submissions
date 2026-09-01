class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int maxele=nums[0];
        for(int i=0;i<k;i++)
        {
            if(nums[i]>maxele)maxele=nums[i];
        }
        ans.push_back(maxele);
        int j=0;
        for(int i=k;i<nums.size();i++)
        {
            if(nums[j]==maxele)
            {
                maxele=nums[j+1];
                for(int m=j+1;m<j+k+1 && m<nums.size();m++)
                {
                    maxele=max(maxele,nums[m]);
                }
                ans.push_back(maxele);
            }else{
                maxele=max(maxele,nums[i]);
                ans.push_back(maxele);
            }
            j++;
        }
        return ans;
    }
};
