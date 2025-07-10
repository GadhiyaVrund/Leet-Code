class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        int c = 0;
        for(int num : set){
            if(set.find(num-1) == set.end()){
                int cn = num;
                int cs = 1;
                while(set.find(cn+1) != set.end()){
                    cn++;
                    cs++;
                }
                c = max(c, cs);
            }
        }
        return c;
    }
};
