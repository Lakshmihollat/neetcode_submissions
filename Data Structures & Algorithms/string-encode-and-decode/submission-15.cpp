class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++)
        {
            int len=strs[i].size();
            res+=to_string(len)+'#'+strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int right=0;
        while(right<s.length())
        {
            int len=0;
            int j=right;
            while(s[j]!='#')
            {
                len=len*10+(s[j]-'0');
                j++;
            }
            j++;
            ans.push_back(s.substr(j,len));
            right=j+len;
        }
        return ans;
    }
};
