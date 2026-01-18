class Solution {
public:
    int vowelConsonantScore(string s) {
        int vovel = 0;
        int con = 0;

        for(char x : s){
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x=='u'){
                vovel++;
            }else if(int(x) >= 97 && int(x) <= 122){
                con++;
            }
        }
        if(con > 0){
            
        return floor(vovel/con);
        }else{
            return 0;
        }
        
            
    }
};