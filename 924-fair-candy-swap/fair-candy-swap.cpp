class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = 0, sum2 = 0;
        
        for (int x : aliceSizes) sum1 += x;
        for (int y : bobSizes) sum2 += y;

        for (int a : aliceSizes) {
            for (int b : bobSizes) {
                if (sum1 - a + b == sum2 - b + a){
                    return {a,b};
                }
            }
        }
        return {};
    }
};