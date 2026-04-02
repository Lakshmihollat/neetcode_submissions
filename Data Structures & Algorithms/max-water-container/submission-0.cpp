class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int vol=0,maxvol=0;
        while(left<right)
        {
            vol=min(heights[left],heights[right])*(right-left);
            maxvol=max(vol,maxvol);
            if(heights[left]>heights[right])right--;
            else left++;

        }
        return maxvol;
    }
};
