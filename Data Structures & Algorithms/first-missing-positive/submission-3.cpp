class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=1;
        int n=nums.size();
        while(1)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                return i;
            }
            i++;
        }
    }
};