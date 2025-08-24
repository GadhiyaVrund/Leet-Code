class Solution {
public:
    
    bool isHappy(int n) {
        unordered_set<int> s;
        do{
            if(s.find(n) == s.end()){
                s.insert(n);
                int res=0;
                while(n){
                    int r = n % 10;
                    res += r*r;
                    n /= 10;     
                }
                if(res == 1){
                    return true;
                }
                n = res;
            }
            else{
                return false;
            }
        }while(true);
    }
};