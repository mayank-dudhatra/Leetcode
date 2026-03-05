class Solution {
public:
    int check(string s, int a){
        int count = 0;

        for(int i=0; i<s.length(); i++){
            if(a == 0 && s[i] != '0'){
                count++;
                a = 1;
            }
            else if(a == 1 && s[i] != '1'){
                count++;
                a=0;
            }
            else {
                if(a == 0) a=1;
                else a=0;
            }

        }

        return count;
    }
    int minOperations(string s) {
        int ans = min(check(s, 0) , check(s,1));

        return ans;
    }
};