class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen=0;
        int len=0;
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                len++;
            }
            else{    len=0;
            }
            maxlen=max(maxlen,len+1);
        }
        len=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                len++;
            }
            else{    len=0;
            }
            maxlen=max(maxlen,len+1);
        }
        return maxlen==0?1:maxlen;
    }
};