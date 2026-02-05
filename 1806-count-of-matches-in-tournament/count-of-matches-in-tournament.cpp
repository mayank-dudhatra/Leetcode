class Solution {
public:
    int numberOfMatches(int n) {
        int advanced = n;
        int matches = 0;
        int count = 0;

        while (advanced > 1) {
            if (advanced % 2 == 0) {
                matches = advanced / 2;
                advanced = advanced / 2;
            } else {
                matches = (advanced - 1) / 2;
                advanced = (advanced - 1) / 2 + 1;
            }
            count += matches;
        }

        return count;
    }
};
