class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
       
        while (left < right) {
         int m = (left + right) / 2;
         int sum = 0;
            for (int i : nums)
                sum += (i + m - 1) / m;
            if (sum > threshold)
                left = m + 1;
            else
                right = m;
        }
        return left;
    }
};