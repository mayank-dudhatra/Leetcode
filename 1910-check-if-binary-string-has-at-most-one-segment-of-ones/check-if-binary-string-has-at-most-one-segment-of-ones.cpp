class Solution {
public:
    bool check(string s){
        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i] == '1') return false;
        }

        return true;
    }

    bool checkOnesSegment(string s) {
        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i] == '0') return check(s.substr(i));
        }

        return true;
    }
};