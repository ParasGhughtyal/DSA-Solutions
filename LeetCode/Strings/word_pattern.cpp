class Solution {
public:
    bool wordPattern(string pattern, string s) {

        istringstream iss(s);
        string word;
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        int i = 0;

        while(iss >> word) 
        {
            if(i >= pattern.size())
            return false;
            
            char c = pattern[i];

            if(charToWord.count(c)) 
            {
                if(charToWord[c] != word)
                return false;
            }

            else if(wordToChar.count(word)) 
            return false;

            charToWord[c] = word;
            wordToChar[word] = c;

            i++;
        }

        return i == pattern.size();
    }
};
