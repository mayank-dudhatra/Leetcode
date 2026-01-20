class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;

        for (int i = 0; i < n; i++) {
            bool found = false;

            for (int x = 0; x <= nums[i]; x++) {
                if ( (x | (x + 1)) == nums[i] ) {
                    v.push_back(x);   
                    found = true;
                    break;
                }
            }

            if (!found) {
                v.push_back(-1);
            }
        }

        return v;
    }
};
