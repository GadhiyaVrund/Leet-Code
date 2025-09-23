class Solution {
public:
    int mySqrt(int x) {
        int st = 1,ed = x;

        while(st <= ed){
            int mid = st + (ed-st)/2;
            if((long long)mid * mid == x)
                return mid;
            
            else if((long long)mid * mid < x)
                st = mid + 1;
            else
                ed = mid - 1;
        }

        return ed;
    }
};