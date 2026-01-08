class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;

        for (int x : nums)
            if (x % 2 == 0) result.push_back(x);

        for (int x : nums)
            if (x % 2 == 1) result.push_back(x);

        return result;
    }
};
