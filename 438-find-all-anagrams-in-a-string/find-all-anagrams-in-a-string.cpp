class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        int n = s.size();
        int m = p.size();

        vector<int> fp(26, 0);
        vector<int> w(26, 0);

        if (m > n)
            return ans;

        for (int i = 0; i < m; i++) {
            fp[p[i] - 'a']++;
            w[s[i] - 'a']++;
        }

        if(fp == w) ans.push_back(0);

        for(int j=m; j<n; j++){
            w[s[j] - 'a']++;

            w[s[j - m] - 'a']--;

            if(fp == w) ans.push_back(j - p.size() + 1);
        }


        return ans; 
    }
};