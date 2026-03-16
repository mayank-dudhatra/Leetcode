class Solution {
public:

    int dividen(int n ){
        if(n == 0) return 0;

        if(n%2==0){
            return 1+dividen(n/2);
        } 
        else {
            return 1+dividen(n-1);
        }

    }
    
    int numberOfSteps(int num) {
        return dividen(num);
    }
};