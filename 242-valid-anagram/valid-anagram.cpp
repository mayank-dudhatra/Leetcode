class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) return false; // Early exit

        unordered_map<char, int> mp1;

        for(char c : s){
            mp1[c]++;
        }

        for(char c : t){
            mp1[c]--;
        }

        for(auto& p : mp1){
            if(p.second != 0) return false; 
        }

        return true;
    }
};