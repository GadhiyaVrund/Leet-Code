class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.empty()) return;
        int i = m-1, j = n-1;
        int s = nums1.size()-1;
        while(i>=0 && j>=0){
            nums1[s] = max(nums1[i],nums2[j]);
            nums1[i] >= nums2[j] ? i-- : j--;
            s--;
        }  
        while(i<0 && s>=0){
            nums1[s] = nums2[j];
            j--;s--;
        }
    }
};