class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int pos = n-1;

        vector<int> result(n);

        for(int i=0; i<n; i++){
            int leftsq = nums[left]*nums[left];
            int rightsq = nums[right]*nums[right];


            if(leftsq > rightsq){
                result[pos] = leftsq;
                left++;
            }
            else {
                result[pos] = rightsq;
                right--;
            }
            pos--;
        }

        return result;
    }
};