class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int ans = (n*n)*w;

        if(ans <= maxWeight) return n*n;
        
        return maxWeight/w;
    }
};