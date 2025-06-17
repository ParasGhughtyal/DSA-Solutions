class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        
        int total = 0, left = 0;
        
        for(int num : arr)
        total += num;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(left == total - left - arr[i])
            return i;
                
            left += arr[i];
        }
        
        return -1;
    }
};
