class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charfreq;
        int start = 0;
        int maxlen = 0;

        for(int i = 0; i < s.size(); i++) {

            // if character seen and inside current window
            if(charfreq.find(s[i]) != charfreq.end() && charfreq[s[i]] >= start) {
                start = charfreq[s[i]] + 1;
            }

            // update last seen index
            charfreq[s[i]] = i;

            // update max length
            maxlen = max(maxlen, i - start + 1);
        }

        return maxlen;
    }
};