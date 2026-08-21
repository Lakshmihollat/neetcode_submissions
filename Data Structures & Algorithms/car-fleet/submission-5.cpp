class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pair;
        for (int i = 0; i < position.size(); i++) {
            pair.push_back({position[i], speed[i]});
        }
        sort(pair.rbegin(), pair.rend()); //reserse sorted descending
        vector<double> stack;
        for (auto& p : pair) {
            stack.push_back((double)(target - p.first) / p.second);
            if (stack.size() >= 2 &&
                stack.back() <= stack[stack.size() - 2])
            {
                stack.pop_back();  //if its able to reach faster.. it wont be allowed cause it will get stuck behind the slower one.. so pop it...
            }
        }
        return stack.size();
    }
};