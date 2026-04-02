class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long int hours = 0;
            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid;  // ceiling of bananas/mid
            }

            if (hours <= h) {
                result = mid;        // try smaller k
                high = mid - 1;
            } else {
                low = mid + 1;       // need more speed
            }
        }

        return result;
    }
};