class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        vector<int> mon(3);
        for(int i=0;i<n;i++){
            while(bills[i] == 5){
                if(i == n-1) return true;
                mon[2]+=1;
                i++;
            } 
            if(bills[i] == 10 && mon[2] > 0){
                mon[2] -=1;
                mon[1] +=1;
                continue;
            } else if(bills[i] == 20){
                if(mon[1] > 0 && mon[2] > 0){
                    mon[2] -=1;
                    mon[1] -=1;
                    mon[0] +=1;
                } else if(mon[2] >= 3){
                    mon[2] -=3;
                    mon[0] +=1;
                } else{
                    return false;
                }
            } else{
                return false;
            }
        }
        return true;
    }
};