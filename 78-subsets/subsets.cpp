class Solution {
public:
    vector<vector<int>> result;

    void generate(int idx, int k, vector<int>& nums, vector<int>& current) {
        
        if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            current.push_back(nums[i]);
            generate(i + 1, k, nums, current);
            current.pop_back(); 
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        result.push_back({}); 

        for (int k = 1; k <= n; k++) {
            vector<int> current;
            generate(0, k, nums, current);
        }

        return result;
    }
};
