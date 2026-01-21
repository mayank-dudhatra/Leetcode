class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> subset;
        
        findcombination(0, target, subset, result, candidates);

        return result;
    }


    void findcombination(int index, int target, vector<int>& subset, vector<vector<int>>& result, vector<int>& candidates) {
        if(index == candidates.size()){
            if(target == 0){
                result.push_back(subset);
            }
            return;
        }

        if(candidates[index] <= target){
            subset.push_back(candidates[index]);

            findcombination(index, target-candidates[index], subset, result, candidates );
            subset.pop_back();
        }

        findcombination(index+1, target, subset, result, candidates );
    }
};