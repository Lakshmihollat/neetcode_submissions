class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> minHeap;
        for (int num : stones) {
            minHeap.push(num);
        }
        while(minHeap.size()!=1){
        int val=minHeap.top();
        minHeap.pop();
        int t=minHeap.top();
        minHeap.pop();
        minHeap.push(abs(t-val));
        }
        return minHeap.top();
    }
};
