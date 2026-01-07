class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        vector<int> v;

        for(int x : arr){
             while (i < x) {
                v.push_back(i);
                i++;
            }
            i = x + 1;
        }

        while (v.size() < k) {
            v.push_back(i);
            i++;
        }

        return v[k-1];
        
    }
};