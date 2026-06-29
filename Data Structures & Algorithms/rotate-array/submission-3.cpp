class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //rotate(nums.begin(), nums.end() - (k % nums.size()), nums.end());
        //std::rotate(nums.begin(), nums.end()-(k%nums.size()), nums.end());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+(k%nums.size()));
        reverse(nums.begin()+(k%nums.size()),nums.end());
    }
};