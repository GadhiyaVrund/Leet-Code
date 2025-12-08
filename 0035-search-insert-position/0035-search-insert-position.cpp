class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int st=0,end=nums.size()-1;
        if(tar > nums[end]) return end+1;
        if(tar <= nums[st]) return 0;
            
        
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid] == tar ){
                return mid;
            }
            else if(nums[mid] < tar){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return st;
    }
};