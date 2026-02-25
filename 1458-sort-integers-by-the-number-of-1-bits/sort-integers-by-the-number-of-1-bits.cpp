class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    vector< pair<int ,int> > v;

      for(int a : arr){
        int count = __builtin_popcount(a);
        v.push_back({count, a});
      }

      sort(v.begin(), v.end());

    vector<int> result;

        for(auto &p : v){
            result.push_back(p.second);
        }
        
        return result;

    }
};
