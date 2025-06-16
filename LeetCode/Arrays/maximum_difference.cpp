class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    
        int smallest = nums[0], max_diff = -1;

        for(int i=1; i<nums.size(); i++)
        {   
            if(nums[i] > smallest)
            max_diff = max(max_diff, nums[i] - smallest);

            else
            smallest = nums[i];

        }

        return max_diff;
    }
};
