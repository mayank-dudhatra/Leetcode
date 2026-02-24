class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,int> first, last;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            
            if(first.find(nums[i]) == first.end())
                first[nums[i]] = i;

            last[nums[i]] = i;
        }

        int f = 0; 
        for(auto x : mp)
            f = max(f, x.second);

        int ans = INT_MAX;

        for(auto x : mp){
            if(f == x.second){
                ans = min(ans, last[x.first] - first[x.first] + 1);
            }
        }

        return ans;
    }
};