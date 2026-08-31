class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int lastidx=0;
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i]) && mp[s[i]]>=start)
            {                
                start=mp[s[i]]+1;                
            }
            mp[s[i]]=i;
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};
