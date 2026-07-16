class Solution {
public:
    int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int maxarea=0;
    int area=0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ROWS=grid.size(), COLS=grid[0].size();
        for(int r=0;r<ROWS;r++)
        {
            for(int c=0;c<COLS;c++)
            {
                if(grid[r][c]==1)
                {
                    area=0;
                    dfs(grid,r,c);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }

    void dfs(vector<vector<int>>& grid, int r, int c)
    {
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c]==0)
        {
            return;
        }
        grid[r][c]=0;
        area++;
        for(int i=0;i<4;i++)
        {
            dfs(grid,r+direction[i][0],c+direction[i][1]);
        }
    }
};
