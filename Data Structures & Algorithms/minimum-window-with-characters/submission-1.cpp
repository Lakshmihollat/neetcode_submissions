class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.empty()) return "";

        unordered_map<char, int> t_map;
        for (char c : t) t_map[c]++;

        int have = 0, need = t_map.size();
        unordered_map<char, int> window_map;
        int l = 0, r = 0;
        int min_len = INT_MAX, start = 0;

        for (r = 0; r < s.size(); r++) {
            char c = s[r];
            window_map[c]++;
            
            if (t_map.count(c) && window_map[c] == t_map[c]) {
                have++;
            }

            while (have == need) {
                // Update min window
                if ((r - l + 1) < min_len) {
                    min_len = r - l + 1;
                    start = l;
                }

                // Shrink the window
                window_map[s[l]]--;
                if (t_map.count(s[l]) && window_map[s[l]] < t_map[s[l]]) {
                    have--;
                }
                l++;
            }
        }

        return min_len == INT_MAX ? "" : s.substr(start, min_len);
    }
};