class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() <= 1) return;
        vector<int> ans(nums.size(),0);
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> count(maxVal + 1, 0);
        for(int a : nums){
            count[a]++;
        }
        for(int i=1;i<count.size();i++){
            count[i] += count[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            int idx = count[nums[i]]-1;
            ans[idx] = nums[i];
            count[nums[i]]--;
        }
        for(int i=0;i<ans.size();i++){
            nums[i] = ans[i];
        }
    }
};