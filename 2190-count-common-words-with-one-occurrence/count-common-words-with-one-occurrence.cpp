class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> c1, c2;

        for (auto& w : words1) c1[w]++;
        for (auto& w : words2) c2[w]++;

        int count = 0;
         for(auto x : c1){
            if(x.second == 1 && c2[x.first] == 1){
                count++;
            }
        }
        return count;
    }
};
