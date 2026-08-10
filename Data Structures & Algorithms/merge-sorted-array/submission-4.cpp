class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
        if(find(nums1.begin(),nums1.end(),0)!=nums1.end())
        {
            auto f= find(nums1.begin(),nums1.end(),0);
            nums1.erase(f);
        }
        }
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};