class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int a = 0;
        int b = 0;


        while(a < s.size() && b < t.size())
        {
            if(s[a] == t[b])
            a++, b++;      

            else
            b++;

        }

        if(a != s.size())
        return false;

        return true;
    }
};
