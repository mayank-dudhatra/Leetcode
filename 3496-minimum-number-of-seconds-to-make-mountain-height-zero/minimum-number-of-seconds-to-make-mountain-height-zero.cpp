class Solution {
public:
    long long maxHeight(long long time, int t) {
        long long k = (2LL * time) / t;
        long long x = (sqrt(1.0 + 4.0 * k) - 1) / 2;
        return x;
    }

    bool can(long long time, int mountainHeight, vector<int>& workerTimes) {
        long long total = 0;

        for (int t : workerTimes) {
            total += maxHeight(time, t);
            if (total >= mountainHeight) return true;
        }

        return total >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long left = 0, right = 1e18;
        long long ans = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (can(mid, mountainHeight, workerTimes)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};