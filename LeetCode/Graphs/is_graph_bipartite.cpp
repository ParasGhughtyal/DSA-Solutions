class Solution {
public:

    int checkBip(int node, vector<vector<int>>& graph, vector<int>& color)
    {
        for(auto& neigh : graph[node])
        {
            if(color[neigh] == -1)
            {
                color[neigh] = (color[node] + 1) % 2;

                if(!checkBip(neigh, graph, color))
                return 0;
            }

            else
            {
                if(color[neigh] == color[node])
                return 0;
            }
        }

        return 1;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        
        int V = graph.size();

        vector<int> color(V, -1);

        for(int i=0; i<V; i++)
        {
            if(color[i] == -1)
            {
                color[i] = 0;
                if(!checkBip(i, graph, color))
                return 0;
            }
        }

        return 1;
    }
};
