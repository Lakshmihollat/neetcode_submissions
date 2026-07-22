class Solution {
public:
    bool isHappy(int n) {
        vector<int>nums;
        while(1)
        {
            int rem=sumofsquares(n);
            if(rem==1)return true;
            if(find(nums.begin(),nums.end(),rem)!=nums.end())
            {
                return false;
            }
            nums.push_back(rem);
            n=rem;
        }
    }
    
    int sumofsquares(int n)
    {
        int sum=0;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        return sum;
    }
};
