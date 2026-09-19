class Solution {
public:
    int dr[4]={0,0,-1,1};
    int dc[4]={1,-1,0,0};

    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())return 0;
        int ct=0;
        int fresh=0;
        queue<vector<int>>rotten;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    rotten.push({i,j});
                }else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        if(rotten.empty())
            return fresh == 0 ? 0 : -1;
        while(!rotten.empty() && fresh>0)
        {
            int size=rotten.size();

            ct++;
            for(int i=0;i<size;i++)
            {
                vector<int>val= rotten.front();
                rotten.pop();
                for(int j=0;j<4;j++)
                {
                    int row=val[0]+dr[j];
                    int col=val[1]+dc[j];
                    if(row>=0 && row<grid.size() && col>=0 && col<grid[0].size())
                    {
                        if(grid[row][col]==1)
                        {
                            grid[row][col]=2;
                            fresh--;
                            rotten.push({row,col});
                        }
                    }
                }
            }
        }
        if(fresh!=0)return -1;
        return ct;
    }
};
