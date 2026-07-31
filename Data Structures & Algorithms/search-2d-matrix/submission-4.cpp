class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            if(target<=matrix[i][cols-1])
            {
                return find(matrix[i].begin(),matrix[i].end(),target)!=matrix[i].end();
            }
        }
        return false;
    }
};
