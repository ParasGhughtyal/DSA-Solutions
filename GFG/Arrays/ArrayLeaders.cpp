class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        
        int n = arr.size(), maxi = INT_MIN;
        vector<int> ans;
        
        for(int i=n-1; i>=0; i--) 
        {
            if(arr[i] >= maxi) 
            {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
    
        return ans;
    }
};
