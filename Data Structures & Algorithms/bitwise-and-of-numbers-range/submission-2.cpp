class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        /*while (left < right) {
            right &= (right - 1);
        }
        return right;*/
        int num=left;
        while(right!=left)
        {
            num = num&(left+1);
            left++;
        }
        return num;
    }
};