class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //unordered_set<int>s(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int ct=1;
        int maxlen=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }else if(nums[i+1]==nums[i]+1){
                ct++;
            }
            else{
                maxlen=max(maxlen,ct);
                ct=1;
            }
        }
        maxlen=max(maxlen,ct);
        return maxlen;
    }
};