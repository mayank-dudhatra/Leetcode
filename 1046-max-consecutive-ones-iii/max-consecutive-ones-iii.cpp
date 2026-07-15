class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int n = nums.size();
        int count =0;
        int mx  = 0;

        for(int right=0; right<n; right++){
            if(nums[right] == 0) count++;

            while(count > k){
                if(nums[left] == 0) count--;
                left++;
            }

            mx = max((right-left+1), mx);
        }

        return mx;
    }
};