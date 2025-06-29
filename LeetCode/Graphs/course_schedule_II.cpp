class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& pre) {
        
        int P = pre.size();
        
        vector<vector<int>> adj(N);
        vector<int> inDeg(N,0), ans;
        
        for(int i=0; i<P; i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
            inDeg[pre[i][0]]++;
        }
        
        queue<int> q;
        
        for(int i=0; i<N; i++)
        if(!inDeg[i])
        q.push(i);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int i=0; i<adj[node].size(); i++)
            {
                inDeg[adj[node][i]]--;
                
                if(!inDeg[adj[node][i]])
                q.push(adj[node][i]);
            }
        }
        
        return ans.size() == N ? ans : vector<int>{};
    }
};
