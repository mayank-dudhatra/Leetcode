class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int e = 0;
        int o = 1;

        for(int x : nums){
            if(x%2==0) {
                res[e] = x;
                e+=2;
            }
            if(x%2!=0){
                res[o] = x;
                o+=2;
            }
        }
        return res;
    }
};