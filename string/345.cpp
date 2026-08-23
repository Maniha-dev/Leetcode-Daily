class Solution {
public:
    string reverseVowels(string s) {
        int r = 0;
        int l = s.size() - 1;
        char swap1 = 'o';
        char swap2 = 'o';

        while (r < l) {

            // r ko tab tak move karo jab tak vowel na mil jaye
            if (!(s[r] == 'a' || s[r] == 'A' ||
                  s[r] == 'e' || s[r] == 'E' ||
                  s[r] == 'i' || s[r] == 'I' ||
                  s[r] == 'o' || s[r] == 'O' ||
                  s[r] == 'u' || s[r] == 'U')) {
                r++;
                continue;
            }

            // l ko tab tak move karo jab tak vowel na mil jaye
            if (!(s[l] == 'a' || s[l] == 'A' ||
                  s[l] == 'e' || s[l] == 'E' ||
                  s[l] == 'i' || s[l] == 'I' ||
                  s[l] == 'o' || s[l] == 'O' ||
                  s[l] == 'u' || s[l] == 'U')) {
                l--;
                continue;
            }

            // dono vowels mil gaye
            swap1 = s[r];
            swap2 = s[l];

            s[r] = swap2;
            s[l] = swap1;

            r++;
            l--;
        }

        return s;
    }
};