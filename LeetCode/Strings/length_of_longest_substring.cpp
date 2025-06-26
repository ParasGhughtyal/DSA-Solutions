class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool> freq(256,0);

        int first = 0, second = 0, len = 0;

        while(second < s.size())
        {
            while(freq[s[second]])
            {
                freq[s[first]] = 0;
                first++;
            }

            freq[s[second]] = 1;
            len = max(len, second - first + 1);
            second++;
        }

        return len;
    }
};
