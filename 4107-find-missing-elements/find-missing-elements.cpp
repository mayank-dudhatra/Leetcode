class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int k = nums[0];
        int n = nums.size();
        int i=0;
        vector<int> res;

        while(k<nums[n-1]){
            if(i<n && nums[i] == k){
                i++;
            }
            else {
                res.push_back(k);
            }
            k++;
        }

        return res; 
    }
};