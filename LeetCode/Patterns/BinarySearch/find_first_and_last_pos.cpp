class Solution {
public:

    void search(vector<int>& nums, int left, int right, int target, int& first, int& last)
    {
        if(left > right)
        return;

        int mid = left + (right - left) / 2;

        if(nums[mid] == target) 
        {
            if (first == -1 || mid < first)
                first = mid;
            if (last == -1 || mid > last)
                last = mid;

            search(nums, left, mid - 1, target, first, last);
            search(nums, mid + 1, right, target, first, last);
        }

        else if(nums[mid] > target)
        search(nums, left, mid - 1, target, first, last);

        else
        search(nums, mid + 1, right, target, first, last);
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1, last = -1;
        
        search(nums, 0, nums.size() - 1, target, first, last);
        return {first, last};
    }
};

