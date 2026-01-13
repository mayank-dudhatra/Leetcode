class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int leftsum =0;
            int rightsum =0;

            for(int j=0; j<i; j++){
                leftsum+=nums[j];
            }

            for(int k=i+1; k<n; k++){
                rightsum+=nums[k];
            }

            v.push_back(abs(leftsum - rightsum));
        }

        return v;
    }
};