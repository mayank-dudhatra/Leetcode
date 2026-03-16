class Solution {
public:
    int helper(int x, int rev){

        if(x == 0) return rev;

        int digit = x % 10;

        if(rev > INT_MAX/10 || (rev == INT_MAX/10 && digit>7) ) return 0;

        if(rev < INT_MIN/10 || (rev == INT_MIN/10 && digit<-8) ) return 0;

        return helper(x/10, rev*10 + digit);
    };

    int reverse(int x) {

        return helper(x, 0);

    }

};