class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        int m=strs[0].size();
        for(int i=0;i<m;i++) //letters of first string
        {
            char c=strs[0][i];
            for(int j=0;j<n;j++) //num of strings
            {
                if(i==strs[j].size())return ans;
                if(strs[j][i]!=c)return ans;
            }
            ans+=c;
        }
        return ans;
    }
};