class MedianFinder {
public:
    vector<int>nums;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.push_back(num);
    }
    
    double findMedian() {
        sort(nums.begin(),nums.end());
        if(nums.size()%2!=0)
        {
            return nums[(nums.size())/2];
        }else{
            int mid=nums.size()/2;
            double median= (nums[mid]+nums[mid-1])/2.0;
            return median;
        }
    }
};
