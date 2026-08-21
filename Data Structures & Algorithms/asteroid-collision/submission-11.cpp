class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            bool destroyed = false;
            while (!st.empty() && st.back() > 0 && asteroids[i] < 0) {
                if (abs(st.back()) < abs(asteroids[i])) {
                    st.pop_back();              // Top asteroid explodes
                }
                else if (abs(st.back()) == abs(asteroids[i])) {
                    st.pop_back();              // Both explode
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;           // Current asteroid explodes
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(asteroids[i]);
            }
        }

        return st;
    }
};