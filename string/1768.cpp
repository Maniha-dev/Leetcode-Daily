class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word;

        int i = 0;

        while (i < word1.size() && i < word2.size()) {
            word += word1[i];
            word += word2[i];
            i++;
        }

        while (i < word1.size()) {
            word += word1[i];
            i++;
        }

        while (i < word2.size()) {
            word += word2[i];
            i++;
        }

        return word;
    }
};