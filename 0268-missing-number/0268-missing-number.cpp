class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int count = (n * (n+1)) /2;

        for(int a : nums)
            count -= a;
        
        return count;
    }
};