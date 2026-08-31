class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                st+=tolower(s[i]);
            }else if(isdigit(s[i]))
            {
                st+=s[i];
            }
        }
        string rev=st;
        reverse(rev.begin(),rev.end());
        return rev==st;
    }
};
