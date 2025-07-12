class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_map<int, bool> seen;

        for(int &num : nums)
        seen[num] = true;
        

        vector<int> result;

        for(int i = 1; i <= nums.size(); i++)
        {
            if(!seen[i]) 
            result.push_back(i);     
        }

        return result;
    }
};
