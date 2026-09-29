class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
        int maxcount = 1;
        
       for(int i=0; i<n; i++){
        char c = s[i];
        int count = 1;
        while(i < n && c == s[i+1]){
                count++;
                i++;
        }
        maxcount = max(count, maxcount);
       }

        return maxcount;
    }
};