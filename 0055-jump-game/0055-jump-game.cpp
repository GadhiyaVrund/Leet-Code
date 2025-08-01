class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        for(int i = 0;i<n;i++){
            int c = nums[i];
            while(c){
                c--;
                i++;
                if(i == n-1) return true; 
                if(nums[i] > c)
                    c = nums[i];
            }
            if(nums[i] <= 0) return false;
        }
        return false;
    }
};