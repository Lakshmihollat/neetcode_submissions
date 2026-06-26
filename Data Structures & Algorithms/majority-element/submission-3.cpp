class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=1;
        int ele=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==ele)
            {
                ct++;
            }else{
                    ct--;
                if(ct==-1){
                    ct=1;
                    ele=nums[i];
                }
            }
        }
        return ele;
    }
};