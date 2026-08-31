class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int n=word1.size();
        int m=word2.size();
        string ans="";
        while(i<n && j<m)
        {
            ans+=word1[i];
            ans+=word2[j];
            i++;

            j++;
        }
        if(i==n)
        {
            ans+=word2.substr(j,m-j);
        }
        if(j==m)
        {
            ans+=word1.substr(i,n-i);
        }
        return ans;
    }
};