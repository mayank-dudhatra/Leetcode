class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string ss = s + s;

        int diff1 = 0, diff2 = 0;
        int res = INT_MAX;
        int left = 0;

        for (int right = 0; right < 2*n; right++) {

            char expected1 = (right % 2) ? '1' : '0';
            char expected2 = (right % 2) ? '0' : '1';

            if (ss[right] != expected1) diff1++;
            if (ss[right] != expected2) diff2++;

            if (right - left + 1 > n) {

                char exp1 = (left % 2) ? '1' : '0';
                char exp2 = (left % 2) ? '0' : '1';

                if (ss[left] != exp1) diff1--;
                if (ss[left] != exp2) diff2--;

                left++;
            }

            if (right - left + 1 == n) {
                res = min(res, min(diff1, diff2));
            }
        }

        return res;
    }
};