class Solution {
public:


    void dfs(int city, vector<vector<int>>& isConnected, vector<bool>& visited){
        visited[city] = true;

        for(int neigh=0; neigh<isConnected.size(); neigh++){
            if(isConnected[city][neigh]==1 && !visited[neigh]){
                dfs(neigh, isConnected, visited);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        vector<bool> visited(n, false);
        int count = 0;

        for(int city=0; city<n; city++){
            if(!visited[city]){
                count++;
                dfs(city, isConnected, visited);
            }
        }

        return count;

    }
};