class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s : strs)
        {
            int length=s.length();
            ans+=to_string(length)+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            int length=0;
            while(s[j]!='#')
            {
                length=length*10+(s[j]-'0');
                j++;
            }
            j++;
            ans.push_back(s.substr(j,length));
            i=j+length;
        }

        return ans;
    }
};
