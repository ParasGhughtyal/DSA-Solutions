class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        
        unordered_set<int> set(nums.begin(), nums.end());
        int k = set.size();
        int n = nums.size();
        unordered_map<int,int> mp;

        int i=0, j=0, res=0;

        while(j<n)
        {
            mp[nums[j]]++;

            while(mp.size() == k)
            {   
                res += n-j;

                mp[nums[i]]--;
                if(mp[nums[i]] == 0)
                mp.erase(nums[i]);

                i++;
            }

            j++;
        }

        return res;
    }
};
