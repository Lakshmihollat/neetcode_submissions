class Solution {
public:
    int dr[4]={0,0,-1,1};
    int dc[4]={1,-1,0,0};

    void dfs(int r, int c, vector<vector<char>>&grid, vector<vector<bool>>&visited)
    {
        visited[r][c]=true;
        for(int i=0;i<4;i++)
        {
            int row=r+dr[i];
            int col=c+dc[i];
            if(row>=0 && row<grid.size() && col>=0 && col<grid[0].size())
            {
                if(grid[row][col]=='1' && !visited[row][col])
                {
                    dfs(row,col,grid,visited);
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty())return 0;
        int row=grid.size();
        int col=grid[0].size();
        
        int ct=0;
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    ct++;
                    dfs(i,j,grid,visited);
                }
            }
        }
        return ct;

    }
};
