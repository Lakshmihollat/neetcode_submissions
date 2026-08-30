class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int m=strs[0].size();
        string word=strs[0];
        for(int i=0;i<m;i++)
        {
            char c=word[i];
            for(int j=1;j<strs.size();j++)
            {
                if(i==strs[j].size())
                {
                    return ans;
                }else if(strs[j][i]!=c)
                {
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }
};