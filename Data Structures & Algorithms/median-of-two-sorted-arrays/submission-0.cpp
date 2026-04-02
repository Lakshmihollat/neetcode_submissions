class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int size = nums1.size() + nums2.size();
    vector<int> result;

    // Merge both arrays
    for (int i = 0; i < nums1.size(); i++) {
        result.push_back(nums1[i]);
    }
    for (int j = 0; j < nums2.size(); j++) {
        result.push_back(nums2[j]);
    }

    // Sort the merged array
    sort(result.begin(), result.end());

    if (size % 2 == 0) {
        // Even number of elements
        int first = result[size / 2];
        int second = result[(size / 2) - 1];
        return (first + second) / 2.0;
    } else {
        // Odd number of elements
        return result[size / 2];
    }
    }
};