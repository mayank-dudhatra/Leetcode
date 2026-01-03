class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        
        for (int x : nums) {
            if (x % 2 == 0) {
                mp[x]++;
            }
        }

       
        if (mp.empty()) return -1;

        
        priority_queue<pair<int, int>> pq;

        for (auto &it : mp) {
            pq.push({it.second, -it.first});
        }

        
        return -pq.top().second;
    }
};
