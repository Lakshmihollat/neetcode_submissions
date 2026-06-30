class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>ans;
        int left=0;
        int right=height.size()-1;
        int maxl=height[0];
        int maxr=height[height.size()-1];
        int vol=0;
        while(left<right)
        {
            if(maxl<=maxr)
            {
                left++;
                if((maxl-height[left])>0)
                {
                    vol+=maxl-height[left];
                }
                maxl=max(maxl,height[left]);
            }else{
                right--;
                if((maxr-height[right])>0)
                {
                    vol+=maxr-height[right];
                }
                maxr=max(maxr,height[right]);
            }
        }
        return vol;
    }
};