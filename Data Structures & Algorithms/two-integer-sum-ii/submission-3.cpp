class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0;i<numbers.size()-1;i++)
        {
            if(find(numbers.begin(),numbers.end(),target-numbers[i])!=numbers.end())
            {
                for(int j=i+1;j<numbers.size();j++)
                {
                    if(numbers[j]==target-numbers[i])
                    {
                        return {i+1,j+1};
                    }
                }
            }
        }
        return {-1,-1};
    }
};
