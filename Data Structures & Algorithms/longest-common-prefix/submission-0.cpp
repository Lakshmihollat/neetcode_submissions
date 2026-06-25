class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs[0].length();
        int j=0;
        while(j!=strs[0].size()){
        for(int i=1;i<strs.size();i++)
        {
            if(strs[0][j]!=strs[i][j])
            {
                return ans;
            }
        }
        ans+=strs[0][j];
        j++;
        }
        return ans;
    }
};