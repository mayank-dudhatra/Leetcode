class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            int a = nums[i];

            if (a == 0) {
                result[i] = 0;
            } else {
                int newIndex = (i + a) % n;
                if (newIndex < 0) {
                    newIndex += n;  
                }
                result[i] = nums[newIndex];
            }
        }

        return result;
    }
};
