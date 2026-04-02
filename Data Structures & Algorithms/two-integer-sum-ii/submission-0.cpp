class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum=0;
        vector<int>ans(2,-1);
        int left=0,right=numbers.size()-1;
        while(left<right){
        if(numbers[left]+numbers[right]==target)
        {
            ans[0]=left+1;
            ans[1]=right+1;
            return ans;
        }
        else if(numbers[left]+numbers[right]<target)
        {
            left++;
        }
        else
        {
            right--;
        }
        }
        return ans;     
    }
};