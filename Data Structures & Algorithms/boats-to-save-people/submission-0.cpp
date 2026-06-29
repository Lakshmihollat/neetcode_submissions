class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left=0,right=people.size()-1;
        int ct=0;
        while(left<=right)
        {
            int diff=limit-people[right];
            ct++;
            if(diff>=people[left] && left<right){
                left++;
            }
            right--;
        }
        return ct;
    }
};