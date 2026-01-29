class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();

        int count = 0;
        int c=0;

        for(int i=0; i<n ;i++){
            if(s[i] == 'R') c++;
            if(s[i] == 'L') c--;

            if(c==0) count++;
        }

        return count;
    }
};