class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int num : nums) {
            res ^= num;  //every number xor with itself is 0
        }
        return res;
    }
};