class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int, int> mp;
        int ans = -1;

        for(auto it : arr)
        mp[it]++;

        for(auto it : mp)
        {
            if(it.second == it.first)
            ans = max(ans, it.first);
        }

        return ans;
    }
};
