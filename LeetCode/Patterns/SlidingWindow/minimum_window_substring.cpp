class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int> hash(256, 0);
        for(int i=0; i<t.size(); i++)
        hash[t[i]]++;

        int start = 0, end = 0, ans = INT_MAX, total = t.size(), index = -1;

        while(end < s.size())
        {
            hash[s[end]]--;

            if(hash[s[end]] >= 0)
            total--;

            while(!total && start <= end)
            {
                if(end-start+1 < ans)
                {
                    ans = end-start+1;
                    index = start;
                }

                hash[s[start]]++;

                if(hash[s[start]] > 0)
                total++;

                start++;
            }

            end++;
        }

        if(index == -1)
        return "";

        string str = "";
        for(int i=index; i<index+ans; i++)
        str += s[i];

        return str;
    }
};
