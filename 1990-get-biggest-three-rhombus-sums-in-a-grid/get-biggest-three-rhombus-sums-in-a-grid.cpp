class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        set<int> distinct;                   // store unique sums
        priority_queue<int, vector<int>, greater<int>> pq; // min heap (size ≤ 3)

        for(int r = 0; r < m; r++) {
            for(int c = 0; c < n; c++) {

                int sum = grid[r][c];        // rhombus size 0
                if(distinct.insert(sum).second){
                    pq.push(sum);
                    if(pq.size() > 3) pq.pop();
                }

                for(int k = 1; ; k++) {

                    if(r + 2*k >= m || c - k < 0 || c + k >= n)
                        break;

                    int borderSum = 0;

                    // top -> right
                    for(int i = 0; i < k; i++)
                        borderSum += grid[r + i][c + i];

                    // right -> bottom
                    for(int i = 0; i < k; i++)
                        borderSum += grid[r + k + i][c + k - i];

                    // bottom -> left
                    for(int i = 0; i < k; i++)
                        borderSum += grid[r + 2*k - i][c - i];

                    // left -> top
                    for(int i = 0; i < k; i++)
                        borderSum += grid[r + k - i][c - k + i];

                    if(distinct.insert(borderSum).second){
                        pq.push(borderSum);
                        if(pq.size() > 3) pq.pop();
                    }
                }
            }
        }

        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};