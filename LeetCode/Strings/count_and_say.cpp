class Solution {
public:
    string countAndSay(int n) {
        
        string s = "1";

        while (--n)
        {
            string next = "";

            for (int i = 0; i < s.size(); )
            {
                int count = 1;
                while (i + count < s.size() && s[i] == s[i + count])
                count++;

                next += to_string(count) + s[i];
                i += count;
            }

            s = next;
        }
        
        return s;
    }
};
