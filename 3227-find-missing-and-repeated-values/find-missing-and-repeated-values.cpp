class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         unordered_set<int> seen;

         int repeated =0;
         int missing = 0;

         for(auto &rows : grid){
            for(int num : rows){
                if(seen.find(num) != seen.end() ){
                    repeated = num;
                }
                seen.insert(num);
            }
         }

         for(int i=1; i<=grid.size()*grid.size(); i++){
            if(seen.find(i) == seen.end()){
                missing = i;
                break;
            }
         }

         return {repeated, missing};
    }
};