class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int x : nums){
            mn = min(x, mn);
            mx = max(x, mx);
        }
        return max(0, (mx - k) - (mn + k));
    }
};