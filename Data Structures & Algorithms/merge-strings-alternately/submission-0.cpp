class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l=0;
        int m=0;
        string ans="";
        while(l!=word1.size() && m!=word2.size())
        {
            ans+=word1[l];
            ans+=word2[m];
            l++;m++;
        }
        if(l==word1.size())
        {
            ans+=word2.substr(m,word2.size()-m);
        }else{
            ans+=word1.substr(l,word1.size()-l);
        }
        return ans;
    }
};