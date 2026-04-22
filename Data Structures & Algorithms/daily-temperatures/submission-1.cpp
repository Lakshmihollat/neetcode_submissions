class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        int ct;
        for(int i=0;i<temperatures.size()-1;i++)
        {
            int ele=temperatures[i];
            ct=1;
            int flag=0;
            for(int j=i+1;j<temperatures.size();j++)
            {
                if(temperatures[j]>temperatures[i])
                {
                    ans.push_back(ct);
                    flag=1;
                    break;
                }else{
                    ct++;
                }
            }
            if(flag==0)ans.push_back(0);
            ct=0;
        }
        ans.push_back(0);
        return ans;
    }
};
