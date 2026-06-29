class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int result = -1,sum = 0, left = 0;
    
        for(int i = 0; i<n; i++){
            sum += nums[i];  
        }

        for(int i = 0; i<n; i++){   
            sum -= nums[i];

            if(sum == left){
                result = i;
                break;
            }
            
            left += nums[i];
            
        }

        return result;
    }
};