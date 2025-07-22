class Solution {
public:
    int largestRectangleArea(vector<int>& hei) {
        int res = 0;
        stack<int> s;
        for(int i=0;i<=hei.size();i++){
            int currHeight = (i == hei.size()) ? 0 : hei[i];

            while (!s.empty() && hei[s.top()] > currHeight) {
                int top = s.top();
                s.pop();
                int height = hei[top];
                int width = s.empty() ? i : (i - s.top() - 1);
                res = max(res, height * width);
            }
            s.push(i);
        }
        return res;

    }
};