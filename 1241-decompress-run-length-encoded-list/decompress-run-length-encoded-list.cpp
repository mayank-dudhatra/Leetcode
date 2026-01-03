class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();

        for(int i=0; i<n; i+=2){
            for(int j = nums[i]; j>0; j-- ){
                v.push_back(nums[i+1]);
            }
        }
        return v;
    }
};