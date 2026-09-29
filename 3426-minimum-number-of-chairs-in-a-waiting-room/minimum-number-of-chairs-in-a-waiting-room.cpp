class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int maxcount = 0;
        for(char c : s){
            if(c == 'E'){
                count++;
                maxcount = max(count, maxcount);
            } else {
                count--;
            }
        }
        return maxcount;
    }
};