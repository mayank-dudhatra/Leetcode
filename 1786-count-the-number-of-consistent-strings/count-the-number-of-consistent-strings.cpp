class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s(allowed.begin(), allowed.end());
        int count = 0;

        for (const string& word : words) {
            bool valid = true;
            for (char c : word) {
                if (s.find(c) == s.end()) {
                    valid = false;
                    break;
                }
            }
            if (valid) count++;
        }

        return count;
    }
};
