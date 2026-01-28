class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int n = cost.size();
        int ans = 0;

        for (int i = 0; i < n; i += 3) {
            int x1 = cost[i];
            int x2 = (i + 1 < n) ? cost[i + 1] : 0;

            ans += x1 + x2; 
        }

        return ans;
    }
};
