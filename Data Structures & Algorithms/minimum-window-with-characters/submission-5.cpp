class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> word, str;

        for(char c : t)
            word[c]++;

        int need = word.size();
        int have = 0;

        int left = 0;

        int minLen = INT_MAX;
        int start = 0;

        for(int right=0; right<s.size(); right++)
        {
            str[s[right]]++;

            if(word.count(s[right]) &&
               str[s[right]] == word[s[right]])
            {
                have++;
            }

            while(have == need)
            {
                if(right-left+1 < minLen)
                {
                    minLen = right-left+1;
                    start = left;
                }

                str[s[left]]--;

                if(word.count(s[left]) &&
                   str[s[left]] < word[s[left]])
                {
                    have--;
                }

                left++;
            }
        }

        return minLen==INT_MAX ? "" : s.substr(start, minLen);
    }
};