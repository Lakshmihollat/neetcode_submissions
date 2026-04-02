class Solution {
public:
    bool isPalindrome(string s) {
        string rev;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                rev+=tolower(s[i]);
            }
        }
        s=rev;
        reverse(rev.begin(),rev.end());
        return rev==s;
    }
};
