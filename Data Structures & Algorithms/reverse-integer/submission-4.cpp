class Solution {
public:
    int reverse(int x) {
        
        const int MIN = -pow(2,31); // -2^31
        const int MAX = pow(2,31)-1;  // 2^31 - 1

        int res = 0;
        /*while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (res > MAX / 10 || (res == MAX / 10 && digit > MAX % 10))
                return 0;
            if (res < MIN / 10 || (res == MIN / 10 && digit < MIN % 10))
                return 0;
            res = (res * 10) + digit;
        }*/
        while(x!=0)
        {
            int digit=x%10;
            if(res>MAX/10 || (res==MAX/10 && digit>MAX%10))
            return 0;
            if(res<MIN/10 || (res==MIN/10 && digit<MIN%10))
            return 0;
            res=(res*10) + digit;
            x=x/10;
        }

        return res;
    }
};