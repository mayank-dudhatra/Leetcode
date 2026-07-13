class Solution {
public:
    void dfs(int room, vector<vector<int>>& rooms, vector<bool>& visited){
            visited[room] = true;

            for(int neighbour : rooms[room]){
                if(!visited[neighbour]){
                    dfs(neighbour, rooms, visited);
                }
            }
        }
        
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        
        dfs(0,rooms,visited);

        for(bool v : visited){
            if(v == false) return false;
        }

        return true;
    }
};