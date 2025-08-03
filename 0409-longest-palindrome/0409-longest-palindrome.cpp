class Solution {
public:
    int longestPalindrome(string s) {
        if(s.empty()) return 0;
        int c=0,f=0;
        unordered_map<char,int> freq;

        for(char y : s){
            freq[y]++;
        }
        for(auto [key,val] : freq){
            if(f == 0 && val%2 == 1){
                c++;
                f=1;
            }
            if(val%2 == 0){
                c += val;
            }else{
                c += val-1;
            }
        }
        return c;
    }
};