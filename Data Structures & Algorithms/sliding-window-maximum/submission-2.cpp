class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  // stores indices
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove out-of-window indices
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove smaller elements (they’ll never be max again)
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            // Push current index
            dq.push_back(i);

            // Start recording max values when the first window completes
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }
};