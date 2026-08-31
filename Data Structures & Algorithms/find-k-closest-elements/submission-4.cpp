class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int l=0,r=arr.size()-1;
        if(r-l+1==k)return arr;
        while(r-l+1>k)
        {
            int lm=abs(x-arr[l]);
            int rm=abs(x-arr[r]);
            if(lm<=rm)
            {
                r--;
            }else{
                l++;
            }
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[l]);
            l++;
        }
        return ans;
    }
};