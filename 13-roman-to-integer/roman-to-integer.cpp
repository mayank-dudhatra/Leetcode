class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int prev = 0;
        for (char c : s) {

            int curr = roman[c];
            if(curr > prev){
                total += curr - prev*2;
            }
            else{
                total+=curr;
            }
            prev= curr;
        }
        return total;
    }
};