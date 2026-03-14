class Solution {
public:

    void generate(string curr, int n, vector<string> &res){

        if(curr.length() == n){
            res.push_back(curr);
            return;
        }

        for(char ch : {'a','b','c'}){
            if(curr.empty() || curr.back() != ch){
                generate(curr + ch, n, res);
            }
        }
    }
    
    string getHappyString(int n, int k) {
        vector<string> res;
        generate("", n, res);

        if(k > res.size()) return "";

        return res[k-1];
    }
};