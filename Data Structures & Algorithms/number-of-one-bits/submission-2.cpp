class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*int ct=0;
        while(n>0)
        {
            ct+=n%2;
            n=n/2;
        }
        return ct;*/

        int ct=0;
        while(n>0)
        {
            int rem=n%2;
            ct+=rem;
            n=n/2;
        }
        return ct;
    }
};
