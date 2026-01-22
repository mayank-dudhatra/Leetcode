class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size();
        int m = list2.size();

        unordered_map<string, int> mp;
        vector<string> res;
        int minSum = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            mp[list1[i]] = i;
        }
        
        for(int j=0; j<m; j++){
            if( mp.find(list2[j]) != mp.end()) {
                int sum = j + mp[list2[j]];

                if(sum < minSum){
                    res.clear();
                    res.push_back(list2[j]);
                    minSum = sum;
                }
                else if (sum == minSum) {
                    res.push_back(list2[j]);
                }
            }
        }

        return res;
    }
};