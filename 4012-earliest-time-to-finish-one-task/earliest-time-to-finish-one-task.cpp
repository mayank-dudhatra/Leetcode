class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int ear = INT_MAX;
        int j = 0;

        for(int i=0; i<n; i++){
                ear = min(ear, tasks[i][j] + tasks[i][j+1]);
        }

        return ear;
    }
};