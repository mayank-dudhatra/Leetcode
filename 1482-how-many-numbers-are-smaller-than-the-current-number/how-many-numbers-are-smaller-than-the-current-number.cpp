class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(101, 0);

        for(int num : nums){
            result[num]++;
        }

        for(int i=1; i<101; i++){
            result[i] += result[i-1];
        }

        vector<int> result2;

        for(int n : nums){
            if(n==0) result2.push_back(0);
            else result2.push_back(result[n-1]);
        }

        return result2;
        
    }
};