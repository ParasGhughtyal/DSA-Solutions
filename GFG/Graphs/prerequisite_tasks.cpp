class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& pre) {
        // Code here
        
        vector<vector<int>> adj(N);
        vector<int> inDeg(N,0);
        
        for(int i=0; i<P; i++)
        {
            adj[pre[i].second].push_back(pre[i].first);
            inDeg[pre[i].first]++;
        }
        
        queue<int> q;
        
        for(int i=0; i<N; i++)
        if(!inDeg[i])
        q.push(i);
        
        int count = 0;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            count++;
            
            for(int i=0; i<adj[node].size(); i++)
            {
                inDeg[adj[node][i]]--;
                
                if(!inDeg[adj[node][i]])
                q.push(adj[node][i]);
            }
        }
        
        return count ==  N;
    }
};
