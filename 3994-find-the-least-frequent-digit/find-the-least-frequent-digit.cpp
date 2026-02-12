class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mp;

        while(n > 0){
            int digit = n % 10;
            mp[digit]++;
            n /= 10;
        }

        int minFreq = INT_MAX;
        int result = 9;

        for(auto &p : mp){
            int digit = p.first;
            int freq = p.second;

            if(freq < minFreq || (freq == minFreq && digit < result)){
                minFreq = freq;
                result = digit;
            }
        }

        return result;
    }
};