class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < arr1.size(); i++) {
            mp[arr1[i]]++;
        }

        vector<int> ans;

        for(int i = 0; i < arr2.size(); i++) {
            int element = arr2[i];

            while(mp[element] > 0) {
                ans.push_back(element);
                mp[element]--;
            }
        }

        for(int i = 0; i <= 1000; i++) {
            while(mp[i] > 0) {
                ans.push_back(i);
                mp[i]--;
            }
        }

        return ans;
    }
};