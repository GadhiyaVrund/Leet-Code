class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge;
        vector<int> answer;
        stack<int> s;
        for(int i=nums2.size()-1; i>=0; i--){
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }

            nge[nums2[i]] = !s.empty() ? s.top() : -1;
            s.push(nums2[i]);
        }

        for(int i : nums1){
            answer.push_back(nge[i]);
        }
        return answer;
    }
};