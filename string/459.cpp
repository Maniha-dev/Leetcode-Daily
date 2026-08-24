class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int size1 = 0;

        for (int i = 1; i < s.size(); i++) {

            if (s[i] == s[0]) {

                size1 = i;

                int j = 0;
                int k = size1;

                while (k < s.size()) {

                    if (s[j] != s[k]) {
                        break;
                    }
                    else {
                        j++;
                        k++;

                        if (j == size1) {
                            j = 0;
                        }
                    }
                }

                if (k == s.size() && j == 0) {
                    return true;
                }
            }
        }

        return false;
    }
};