class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxvol=0;
        int vol=0;
        int left=0,right=heights.size()-1;
        while(left<right)
        {
            vol=min(heights[left],heights[right])*(right-left);
            maxvol=max(maxvol,vol);
            if(heights[left]>heights[right])
            {
                right--;
            }else{
                left++;
            }
        }
        return maxvol;
    }
};
