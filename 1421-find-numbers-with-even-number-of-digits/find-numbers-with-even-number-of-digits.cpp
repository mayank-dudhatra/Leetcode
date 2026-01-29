class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int mcount = 0;

        for (int n : nums) {
            int count = 0;
            int x = n;

            while (x > 0) {
                count++;
                x /= 10;
            }

            if (count % 2 == 0) mcount++;
        }

        return mcount;
    }
};
