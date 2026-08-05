class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            {
                r+=tolower(s[i]);
            }if(isdigit(s[i]))
            {
                r+=s[i];
            }
        }
        s=r;
        reverse(r.begin(),r.end());
        return r==s;
    }
};
