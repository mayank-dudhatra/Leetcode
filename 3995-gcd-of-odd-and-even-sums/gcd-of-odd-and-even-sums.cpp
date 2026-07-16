class Solution {
public:
    int GCD(int a, int b) {
        while(b != 0){
            int rem = a%b;
            a = b;
            b = rem;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int i=0;
        int esum = 0;
        int osum = 0;

        for (int i = 1; i <= n; i++) {
            esum += (2 * i - 1); 
            osum += (2 * i);    
        }

        return GCD(esum, osum);
    }
};