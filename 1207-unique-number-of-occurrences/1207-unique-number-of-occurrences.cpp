class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int e : nums){
            map[e]++;
        }

        unordered_set<int> s;
        for(auto e : map){
            s.insert(e.second);
        }

        if(map.size() == s.size()) return true;
        return false;
    }
};