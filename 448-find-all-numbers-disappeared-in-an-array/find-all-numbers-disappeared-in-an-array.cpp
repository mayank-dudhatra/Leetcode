// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> freq;
//         vector<int> result;

//         for (int num : nums) {
//             freq[num]++;
//         }

//         for (int i = 1; i <= n; i++) {
//             if (freq[i] == 0) {
//                 result.push_back(i);
//             }
//         }

//         return result;
//     }
// };

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int , int> freq;

        for(int i=1; i<=n; i++){
            freq[i]++;
        }

        for(int n : nums){
            freq[n]++;
        }
        
        for(auto p : freq){
            if(p.second == 1){
                result.push_back(p.first);
            }
        }
        
        
        return result;
    }
};

