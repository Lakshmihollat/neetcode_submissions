class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph,
             vector<int>& state) {
                if(state[node] == 1)
                    return false;

                if(state[node] == 2)
                    return true;
                    state[node] = 1;
            for(int neighbour : graph[node])
            {
                if(!dfs(neighbour, graph, state))
                    return false;
            }
        state[node] = 2;
    return true;
}

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>state(numCourses,0);
        for(int i = 0; i < numCourses; i++)
        {
            if(!dfs(i, graph, state))
                return false;
        }
        return true;
    }
};
