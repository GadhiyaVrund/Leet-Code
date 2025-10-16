class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i=0,j=0,ans=0;
        long long  prod = 1;
        int n = nums.size();
        for(j=0; j<n; j++){
            prod *= nums[j];

            while(prod >= k){
                prod /= nums[i];
                i++;
            }

            ans += (j-i+1);
        }
        return ans;
    }
};