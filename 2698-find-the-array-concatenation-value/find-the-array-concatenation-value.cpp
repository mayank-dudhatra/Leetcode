class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;

        while (!nums.empty()) {
            if (nums.size() == 1) {
                ans += nums[0];
                break;
            }

            string temp = to_string(nums.front()) + to_string(nums.back());

            ans += stoll(temp);

            nums.pop_back();
            nums.erase(nums.begin());
        }

        return ans;
    }
};