class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                r+=tolower(s[i]);
            }
        }
        string rev=r;
        reverse(r.begin(),r.end());
        return rev==r;
    }
};
