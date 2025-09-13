class Solution {
public:
    bool judgeSquareSum(int c) {
        int ed=sqrt(c);
        int st=0;
        while(st<=ed){
            long int sum = pow(st,2) + pow(ed,2);
            if(sum == c) return true;
            if(sum > c) ed--;
            if(sum < c) st++;
        }
        return false;
    }
};