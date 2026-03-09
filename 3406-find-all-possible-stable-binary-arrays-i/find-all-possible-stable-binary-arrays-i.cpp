class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        const int MOD = 1e9 + 7;
        
        vector<vector<vector<int>>> dp(zero+1,
            vector<vector<int>>(one+1, vector<int>(2,0)));

        dp[0][0][0] = dp[0][0][1] = 1;

        for(int i=0;i<=zero;i++){
            for(int j=0;j<=one;j++){

                if(i>0){
                    for(int k=1;k<=limit && k<=i;k++){
                        dp[i][j][0] = (dp[i][j][0] + dp[i-k][j][1]) % MOD;
                    }
                }

                if(j>0){
                    for(int k=1;k<=limit && k<=j;k++){
                        dp[i][j][1] = (dp[i][j][1] + dp[i][j-k][0]) % MOD;
                    }
                }
            }
        }

        return (dp[zero][one][0] + dp[zero][one][1]) % MOD;
    }
};