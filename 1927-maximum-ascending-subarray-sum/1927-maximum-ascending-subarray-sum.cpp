class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int csum=nums[0],sum = -1;
        for(int i=1;i<nums.size();i++){
            while(i<nums.size() && nums[i] > nums[i-1]){
                csum += nums[i];
                i++;
            }
            sum = max(csum,sum);
            csum=nums[i];
        }
        return sum;
    }
};