class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0,r=l+k-1;
        vector<int>ans;
        for(int r=l+k-1;r<nums.size();r++)
        {
            int m = *max_element(nums.begin() + l, nums.begin() + r + 1);
            ans.push_back(m);
            l++;
        }
        return ans;
    }
};