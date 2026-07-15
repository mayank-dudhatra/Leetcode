class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int count = 0;

        vector<bool> visited(n, false);

        for(int f : fruits){
            bool placed = false;

            for(int j=0; j<n; j++){
                if(!visited[j] && baskets[j] >= f){
                    visited[j] = true;
                    placed = true;
                    break;
                }
            }
            if(!placed) count++;
           
        }

        return count;
    }
};