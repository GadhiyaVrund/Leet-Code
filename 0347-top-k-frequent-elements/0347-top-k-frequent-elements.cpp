class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i : nums)  freq[i]++;

        priority_queue<pair<int,int>> max;

        for(auto p : freq){
            max.push({p.second,p.first});
        }

        for(int i=0; i<k; i++){
            ans.push_back(max.top().second);
            max.pop();
        }

        return ans;
    }
};