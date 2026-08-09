class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*int one = 1;
        int i = 0;
        reverse(digits.begin(), digits.end());
        while (one) {
            if (i < digits.size()) {
                if (digits[i] == 9) {
                    digits[i] = 0;
                } else {
                    digits[i] += 1;
                    one = 0;
                }
            } else {
                digits.push_back(one);
                one = 0;
            }
            i++;
        }
        reverse(digits.begin(), digits.end());
        return digits;*/
        int i=0;
        long long num=0;
        while(i!=digits.size())
        {
            num=num*10+digits[i];
            i++;
        }
        string before=to_string(num);
        num++;
        string after = to_string(num);
        vector<int>res(before.length(),0);
        if(before.length()!=after.length())
        {
            res.push_back(0);
        }
        for(int i=res.size()-1;i>=0;i--)
        {
            res[i]=num%10;
            num=num/10;
        }
        return res;
    }
};