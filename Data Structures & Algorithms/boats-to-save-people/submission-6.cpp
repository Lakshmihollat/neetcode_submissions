class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.rbegin(),people.rend());
        int ct=0;
        int left=0,right=people.size()-1;
        while(left<=right)
        {
            int diff=limit-people[left];
            if(people[right]<=diff)
            {
                right--;
            }
            left++;
            ct++;
        }
        return ct;
    }
};