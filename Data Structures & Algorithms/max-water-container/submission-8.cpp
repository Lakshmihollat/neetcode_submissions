class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxvol=0;
        int left=0,right=heights.size()-1;
        while(left<right)
        {
            int vol=(right-left)*(min(heights[right],heights[left]));
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
