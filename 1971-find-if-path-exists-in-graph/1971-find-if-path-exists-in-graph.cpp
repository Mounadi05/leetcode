class Solution {
public:

    bool hasPath(map<int,vector<int>> &graph,int node , int destination,map<int, bool> &visted)
    {
        for(int &source : graph[node])
        {
            if(source == destination) return true;
            if(!visted[source]) 
            {
                visted[source] = 1;
                if(hasPath(graph, source,destination,visted))
                    return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        map<int,vector<int>> graph;
        map<int, bool> visted;
        for(vector<int> edge : edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        return source == destination || hasPath(graph,source,destination,visted);
     }
};
 