class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int n = nums.size(),max_gap = 0;

        if(n < 2)
        return 0;
        
        sort(begin(nums), end(nums));

        for(int i=1; i<n; i++)
        max_gap = max(max_gap, nums[i] - nums[i-1]);

        return max_gap;
    }
};
