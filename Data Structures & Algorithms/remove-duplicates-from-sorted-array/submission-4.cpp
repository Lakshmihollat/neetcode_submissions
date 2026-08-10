class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                continue;
            }
            else{
                nums[j]=nums[i];
                s.insert(nums[i]);
                j++;
            }
        }
        return j;
    }
};