class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                a.push_back(i);
                while(i < n && nums[i]==target){
                    i++;
                }
                a.push_back(--i);
            }
        }

        if(a.empty()) a.resize(2, -1);

        return a;
    }
};