class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>nums;
        while(1)
        {
            int number=sumofsquares(n);
            if(number==1)return true;
            if(nums.count(number))
            {
                return false;
            }
            nums.insert(number);
            n=number;
        }
    }
    int sumofsquares(int n)
    {
        int sum=0;
        while(n>0)
        {
            int rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
        }
        return sum;
    }
};
