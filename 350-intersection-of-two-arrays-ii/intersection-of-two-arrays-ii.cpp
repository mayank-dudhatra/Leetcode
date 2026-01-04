class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> ms(nums1.begin(), nums1.end());
        vector<int> ans;

        for(int x:nums2){
            if(ms.count(x)){
                ans.push_back(x);
                ms.erase(ms.find(x));
            }
        }

        return ans;
    }
};