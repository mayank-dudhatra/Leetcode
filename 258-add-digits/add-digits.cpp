class Solution {
public:
    int addDigits(int num) {
        int rem = num%10;
        int d = num/10;

        int sum = rem+d;
        if(sum>9) return addDigits(sum);
        return sum;
    }
};