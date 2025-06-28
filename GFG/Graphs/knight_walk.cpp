class Solution {
  public:
    
    int row[8] = {-1,-1,1,1,-2,-2,2,2};
    int col[8] = {-2,2,-2,2,-1,1,-1,1};
    
    bool valid(int i, int j, int N)
    {
        return i>=0 && j>=0 && i<=N && j<=N; 
    }
    
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        // Code here
        
        if(KnightPos[0] == TargetPos[0] && KnightPos[1] == TargetPos[1])
        return 0;
        
        queue<pair<int,int>> q;
        vector<vector<bool>> chess(N+1, vector<bool>(N+1, 0));
        q.push({KnightPos[0], KnightPos[1]});
        chess[KnightPos[0]][KnightPos[1]] = 1;
        
        int step = 0;
        
        while(!q.empty())
        {
            int count = q.size();
            
            while(count--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                for(int k=0; k<8; k++)
                {
                    int next_i = i + row[k];
                    int next_j = j + col[k];
                    
                    if(valid(next_i, next_j, N) && !chess[next_i][next_j])
                    {
                        if(next_i == TargetPos[0] && next_j == TargetPos[1])
                        return step + 1;
                        
                        chess[next_i][next_j] = 1;
                        q.push({next_i, next_j});
                    }
                }
            }
            
            step++;
        }
        
        return -1;
        
    }
};
