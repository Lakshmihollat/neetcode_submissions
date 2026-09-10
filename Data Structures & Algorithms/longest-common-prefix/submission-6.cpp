class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int len=strs[0].size();
        for(int i=0;i<len;i++)
        {
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(i==strs[j].size())
                {
                    return res;
                }
                if(c!=strs[j][i])
                {
                    return res;
                }
            }
            res+=c;
        }
        return res;
    }
};