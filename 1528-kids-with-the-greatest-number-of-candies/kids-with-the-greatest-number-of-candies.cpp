class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;

        int mx = *max_element(candies.begin(), candies.end());

        for (int x : candies) {
            int a = x + extraCandies;
            res.push_back(a >= mx);
        }

        return res;
    }
};
