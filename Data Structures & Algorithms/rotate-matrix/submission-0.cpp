class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m/2;i++)
        {
            swap(matrix[i],matrix[m-i-1]);
        }
        vector<vector<int>>res(n,vector<int>(m));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[j][i]=matrix[i][j];
            }
        }
        matrix=res;
    }
};
