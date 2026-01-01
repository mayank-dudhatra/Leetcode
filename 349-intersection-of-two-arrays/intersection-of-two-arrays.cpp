class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a (nums1.begin(), nums1.end());
        vector<int> ans;

        for(int x : nums2){
            if(a.count(x)){
                ans.push_back(x);
                a.erase(x);
            }
        }
        return ans;
    }
};