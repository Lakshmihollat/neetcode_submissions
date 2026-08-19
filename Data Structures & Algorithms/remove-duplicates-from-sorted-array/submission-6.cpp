class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*int j=0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                continue;
            }
            else{
            if(i>0 && nums[i]==nums[i-1])continue;
            else{
                nums[j]=nums[i];
                //s.insert(nums[i]);
                j++;}
            //}
        }
        return j;*/
        int j=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j]=nums[i];
                j++;
            }
        }

        return j;
        
    }
};