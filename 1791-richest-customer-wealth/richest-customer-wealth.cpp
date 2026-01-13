class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c = accounts.size();
        int r = accounts[0].size();
        int msum = 0;

        for(int i=0; i<c; i++){
            int sum = 0;
            for(int j=0; j<r; j++){
                sum += accounts[i][j];
            }
            msum = max(msum, sum);
        }

        return msum;
    }
};