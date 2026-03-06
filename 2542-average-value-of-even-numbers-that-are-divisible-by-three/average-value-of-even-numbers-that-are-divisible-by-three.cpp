class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0 ; 
        int sum = 0 ;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]%6==0){
                sum = sum + nums[i];
                count++;
            }
        }

        if(count == 0){
            return 0 ;
        }else{
            return sum/count;
        }
    }
};