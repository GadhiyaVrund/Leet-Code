class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int e : nums1){
            map[e]++;
        }
        for(int e : nums2){
            if(map[e]>0){
                ans.push_back(e);
                map[e]=0;
            }
        }
        return ans;
    }
};