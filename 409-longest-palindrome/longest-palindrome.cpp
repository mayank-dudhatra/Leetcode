class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        bool hasOdd = false;

        for(char c : s){
            mp[c]++;
        }

        for (auto& p : mp) {
            if (p.second % 2 == 0) {
                count += p.second;
            } else {
                count += p.second - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) count += 1;

        return count;
    }
};