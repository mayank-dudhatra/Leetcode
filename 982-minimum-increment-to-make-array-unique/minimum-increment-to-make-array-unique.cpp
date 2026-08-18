class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int prev = -1;

        for(int x : nums){
            if(x <= prev){
                count += prev+1-x;
                prev++;
            } 
            else {
                prev = x;
            }
        }

        return count;

    }
};