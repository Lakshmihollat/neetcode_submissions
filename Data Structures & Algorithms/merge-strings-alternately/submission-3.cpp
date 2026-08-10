class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string ans="";
        int i=0,j=0;
        while(i<m && j<n)
        {
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        if(i==m)
        {
            ans+=word2.substr(j,n-j);
        }else{
            ans+=word1.substr(i,m-i);
        }
        return ans;
    }
};