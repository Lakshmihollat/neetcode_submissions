class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //rotate(nums.begin(), nums.end() - (k % nums.size()), nums.end());
        std::rotate(nums.begin(), nums.end()-(k%nums.size()), nums.end());
    }
};