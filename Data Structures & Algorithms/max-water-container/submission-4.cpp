class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxvol=0,vol=0;
        int height=0,width=0;
        int left=0,right=heights.size()-1;
        while(left<right)
        {
            height=min(heights[left],heights[right]);
            width=right-left;
            vol=height*width;
            maxvol=max(maxvol,vol);
            if(heights[left]<heights[right])
            {
                left++;
            }else{
                right--;
            }
        }
        return maxvol;
    }
};
