class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp={{5,0},{10,0},{20,0}};
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                mp[bills[i]]++;
            }else if(bills[i]==10)
            {
                mp[bills[i]]++;
                if(mp[5]==0)
                {
                    return false;
                }else{
                    mp[5]--;
                }
            }else if(bills[i]==20)
            {
                mp[bills[i]]++;
                if(mp[10]==0)
                {
                    if(mp[5]<3)
                    {
                        return false;
                    }
                     mp[5]-=3;
                }else{
                    mp[10]--;
                    if(mp[5]==0)
                    {
                        return false;
                    }
                    mp[5]--;
                }
            }
        }
        return true;
    }
};