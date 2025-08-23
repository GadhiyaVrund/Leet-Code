class Solution {
public:
    int expand(int l, int r,string s){
        int n = s.size();
        int len = 0;
        while(l >= 0 && r < n && s[l] == s[r]){
            len = r-l+1;
            l--; 
            r++;
        }
        return len;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        string res;
        for(int i=0; i<n; i++){
            int l1 = expand(i,i,s);
            int l2 = expand(i,i+1,s);
            int len = max(l1,l2);

            if(res.size() < len){
                int st = i - (len - 1) /2;
                res = s.substr(st,len);
            }
        }
        return res;
    }
};


