class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
        vector<int>lastidx(256,-1);
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++)
        {
            if(lastidx[s[i]]>=start)
            {
                start=lastidx[s[i]]+1;
            }
            lastidx[s[i]]=i;
             maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};
