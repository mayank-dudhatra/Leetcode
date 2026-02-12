class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        unordered_set<int> visited;

        for (auto &p : freq) {
            if (visited.count(p.second)) return false;
            visited.insert(p.second);
        }

        return true;
    }
};