class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

       priority_queue<pair<int, char>> pq;

        for (auto &p : mp) {
            pq.push({p.second, p.first});
        }

        string result;

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            result.append(top.first, top.second); 
        }
        return result;
    }
};