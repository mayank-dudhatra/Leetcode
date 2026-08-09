class Solution {
public:
    string helper(string s){
        string res = "";
        int i=0;

        while(i < s.length()){
            char c = s[i];
            int count = 0;

            while(i<s.length() && c == s[i]){
                count++;
                i++;
            }

            res+=to_string(count);
            res+=c;
        }

        return res;
    }

    string countAndSay(int n) {
        if(n==1) return "1";

        string s = "1";

        for(int i=2; i<=n; i++){
            s = helper(s);
        }

        return s;
    }
};