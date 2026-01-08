class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sum2 = accumulate(bobSizes.begin(), bobSizes.end(), 0);

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