class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        /*while (left < right) {
            right &= (right - 1);
        }
        return right;*/
        int res=left;
        while(left!=right)
        {
            res=res&(left+1);
            left++;
        }
        return res;
    }
};