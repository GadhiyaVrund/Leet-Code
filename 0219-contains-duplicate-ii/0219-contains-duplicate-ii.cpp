class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n=nums.size();
        for(int i=0; i<n;i++){
            int f = nums[i];
            int j = i;

            if(map.find(nums[j]) != map.end()){
                if(abs(map[f] - j) <= k) return true;
            }

            map[f] = i;
        }
        return false;
    }
};