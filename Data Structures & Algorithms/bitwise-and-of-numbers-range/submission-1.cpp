class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        /*while (left < right) {
            right &= (right - 1);
        }
        return right;*/
        int num=right;
        while(right!=left)
        {
            num = num&(right-1);
            right--;
        }
        return num;
    }
};