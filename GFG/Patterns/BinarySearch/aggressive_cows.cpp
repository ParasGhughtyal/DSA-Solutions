// User function Template for C++

class Solution {
  public:

   int aggressiveCows(vector<int> &stalls, int k) {
       
        sort(stalls.begin(), stalls.end());
        
        int n = stalls.size();
        
        if (k > n)
        return -1; 
        
        int start = 1; 
        int end = stalls[n-1] - stalls[0]; 
        int ans = 0;

        while (start <= end)
        {
            int mid = start + (end - start)/2;
            int count = 1;
            int last_pos = stalls[0];
            
            for (int i = 1; i < n; i++)
            {
                if (stalls[i] - last_pos >= mid)
                {
                    count++;
                    last_pos = stalls[i];
                }
            }
            
            if (count >= k)
            {
                ans = mid; 
                start = mid + 1;
            }
            
            else 
            end = mid - 1; 
            
        }

        return ans;
    }
};
