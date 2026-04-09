class Solution {
public:
    int maxArea(vector<int>& heights) {
        int vol=0, left=0, right=heights.size()-1;
        int maxvol=0;
        while(left<right)
        {
            vol=(right-left)*(min(heights[left],heights[right]));
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
