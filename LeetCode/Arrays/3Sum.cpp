class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < nums.size() - 2; i++) 
        {     
            if(i > 0 && nums[i] == nums[i - 1])
            continue;

            int target = -nums[i];
            int start = i + 1, end = nums.size() - 1; 
            
            while(start < end)
            {
                int sum = nums[start] + nums[end];
                
                if(sum == target)
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    
                    while(start < end && nums[start] == nums[start + 1])
                    start++;
                    
                    while(start < end && nums[end] == nums[end - 1])
                    end--;

                    start++;
                    end--;
                }

                else if(sum < target)
                start++;
                
                else 
                end--;
                
            }
        }

        return ans;
    }
};
