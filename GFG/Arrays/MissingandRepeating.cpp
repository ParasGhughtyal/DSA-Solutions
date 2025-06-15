class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        unordered_map<int, int> mp;
        int repeat = 0, missing = 0;
        
        for(int i=0; i<arr.size(); i++)
        mp[arr[i]]++;
        
        for(int i=1; i<=arr.size(); i++)
        {
            if(mp.find(i) == mp.end())
            missing = i;
            
            if(mp[i] > 1)
            repeat = i;
            
        }
        
        return {repeat, missing};
    }
};
