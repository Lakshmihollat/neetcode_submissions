class Solution {
public:
    int maxArea(vector<int>& heights) {
        int vol=0;
        int maxvol=0;
        int left=0;
        int right=heights.size()-1;
        while(left<right)
        {
            vol=min(heights[left],heights[right])*(right-left);
            if(heights[left]<heights[right])
            {
                left++;
            }else{
                right--;
            }
            maxvol=max(maxvol,vol);
        }
        return maxvol;
    }
};
