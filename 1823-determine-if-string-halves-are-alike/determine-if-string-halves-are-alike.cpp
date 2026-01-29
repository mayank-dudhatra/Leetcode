class Solution {
public:
    bool isVowels(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    bool halvesAreAlike(string s) {
        int n = s.length();
        int l = 0, r = n - 1;
        int lc = 0, rc = 0;

        while (l < n / 2) {
            if (isVowels(s[l])) lc++;
            if (isVowels(s[r])) rc++;
            l++;
            r--;
        }

        return lc == rc;
    }
};
