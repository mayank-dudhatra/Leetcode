class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int count = 0;
         int left = 0;
         int n = nums.size();
         int maxl = 0;

         for(int right=0; right<n; right++){
            if(nums[right] == 0) count++;

            while(count>k){
                if(nums[left] == 0) count--;
                left++;
                
            }
            maxl = max(maxl, right-left+1);
         }

         return maxl;
    }
};