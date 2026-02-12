class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        deque<int> maxdq, mindq;
        
        long long ans = 0;
        int left = 0;

        for(int right = 0; right < n; right++) {
            
            while(!maxdq.empty() && nums[maxdq.back()] <= nums[right])
                maxdq.pop_back();
            maxdq.push_back(right);

            while(!mindq.empty() && nums[mindq.back()] >= nums[right])
                mindq.pop_back();
            mindq.push_back(right);

            while(!maxdq.empty() && !mindq.empty() &&
                  (long long)(nums[maxdq.front()] - nums[mindq.front()]) 
                  * (right - left + 1) > k) {

                if(maxdq.front() == left) maxdq.pop_front();
                if(mindq.front() == left) mindq.pop_front();
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }
};