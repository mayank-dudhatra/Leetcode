class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = 0;
        int n = timeSeries.size();
        for (int i = 0; i < n - 1; i++) {
        count += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        count+=duration;
        return count;
    }
};