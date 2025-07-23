class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,-1);
        stack<int> s;
        if(n == 0) return answer;
        
        for(int i=2*n-1; i>=0; i--){
            int idx = i % n;
            while(!s.empty() && s.top() <= nums[idx])
                s.pop();

            if(i<n)
                answer[idx] = !s.empty() ? s.top() : -1;
            s.push(nums[idx]); 
        }

       
        return answer;

    }
};