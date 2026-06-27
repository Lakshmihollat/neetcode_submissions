class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            ans+=to_string(s.length())+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            //now j==#
            int length=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,length));
            i=j+length+1;
        }
        return ans;
    }
};
