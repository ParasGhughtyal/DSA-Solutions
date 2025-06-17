class Solution {
  public:
    vector<int> subarraySum(vector<int> &nums, int target) {
        // code here
        
        int n = nums.size();
        int l = 0, r = 0, sum = 0;
        
        while(r < n)
        {
            sum += nums[r++];
            
            while(sum > target && l < r)
            {
                sum -= nums[l++];
            }
            
            if(sum == target)
            return {l+1,r};
        }
        
        return {-1};
        
    }
};
