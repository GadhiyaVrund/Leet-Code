class Solution {
public:
    bool search(vector<int>& nums, int tar) {
        int n = nums.size();

        int st =  0,ed = n-1;

        while(st <= ed){
            int mid = st + (ed - st)/2;

            if(nums[mid] == tar){
                return true;
            }

            if(nums[st] == nums[mid] && nums[mid] == nums[ed]) {
                st++;
                ed--;
            }

            else if(nums[st] <= nums[mid]) {

                if(nums[st] <= tar && tar < nums[mid]) {
                    ed = mid - 1;
                } else {
                    st = mid + 1;
                }
            }

                
            else {
                if(nums[mid] < tar && tar <= nums[ed]) {
                    st = mid + 1;
                } else {
                    ed = mid - 1;
                }
            }
        }
        return false;
    }
};