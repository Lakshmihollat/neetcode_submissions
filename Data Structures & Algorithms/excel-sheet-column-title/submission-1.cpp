class Solution {
public:
    string convertToTitle(int columnNumber) {
        /*string res;
        while (columnNumber > 0) {
            columnNumber--;
            int offset = columnNumber % 26;
            res += ('A' + offset);
            columnNumber /= 26;
        }
        reverse(res.begin(), res.end());
        return res;*/
        string ans="";
        while(columnNumber!=0)
        {
            columnNumber--;
            int lastdigit=columnNumber%26;
            columnNumber=columnNumber/26;
            ans+= lastdigit+'A';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};