class Solution {
public:
    bool found = false;

    void dfs(vector<vector<char>>& board, 
                const string& target, 
                int curr,
                int i, 
                int j,
                int n,
                int m
                )

    {
        if(found) return;

        if(curr == target.size()) {
            found = true;
            return;
        }

        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != target[curr] )
            return;
        
        char temp = board[i][j];
        board[i][j] = '#';

        dfs(board, target, curr + 1, i, j + 1, n, m);
        dfs(board, target, curr + 1, i + 1, j, n, m);
        dfs(board, target, curr + 1, i - 1, j, n, m);
        dfs(board, target, curr + 1, i, j - 1, n, m);

        board[i][j] = temp;

    }

    bool exist(vector<vector<char>>& board, string word){
        found = false;
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == word[0])
                    dfs(board, word, 0, i, j, n, m);

                    if(found)
                        return true;
            }
        }

        return false;
    }
};