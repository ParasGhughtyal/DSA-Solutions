class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int p1 = 0, p2 =0;
        int sum = 0, size = INT_MAX;

        while(p2 < nums.size())
        {
            sum += nums[p2];

            while(sum >= target)
            {
                size = min(size, p2-p1+1);
                sum -= nums[p1++];
            }

            p2++;
        }

        return size == INT_MAX? 0 : size;
    }
};
