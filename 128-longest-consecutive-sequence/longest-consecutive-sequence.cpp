class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        if (s.empty()) return 0;

        int maxcount = 1;
        int count = 1;

        auto prev = s.begin();

        for (auto it = next(s.begin()); it != s.end(); it++) {

            if (*it == *prev + 1) {
                count++;
            } else {
                count = 1;
            }

            maxcount = max(maxcount, count);

            prev = it;
        }

        return maxcount;
    }
};