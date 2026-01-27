class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        unordered_map<int, int> mp;

        for(int a : nums){
            mp[a]++;
        }

        for(auto& p : mp){
            if(p.second > n/3){
                res.push_back(p.first);
            }
        }

        return res;
    }

};