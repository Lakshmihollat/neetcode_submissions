class Solution {
public:
    bool isPalindrome(string s) {
        /*string rev;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
                rev+=tolower(s[i]);
            if(isdigit(s[i]))
                rev+=to_string(s[i]);
        }
        string ori;
        ori=rev;
        reverse(ori.begin(),ori.end());
        return ori==rev;*/
        string rev;
        for (char c : s) {
            if (isalnum(c)) {
                rev += tolower(c);
            }
        }
        string st=rev;
        reverse(rev.begin(),rev.end());
        return rev==st;

    }
};
