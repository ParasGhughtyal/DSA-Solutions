class Solution {
public:
    string getHint(string secret, string guess) {
        
        unordered_map<char, int> s_map, g_map;
        int bulls = 0, cows = 0;

        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i] == guess[i])
            bulls++;

            else
            {
                s_map[secret[i]]++;
                g_map[guess[i]]++;
            }
        }

        for(auto &[ch, freq] : g_map)
        {
            if(s_map.count(ch))
            cows += min(freq, s_map[ch]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
