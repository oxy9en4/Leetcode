class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int cnt = 0;
        for (int i=0; i < nums.size(); ++i){
            if(nums[i]) {
                sum *= nums[i];
            } else {
                cnt++;
                
            }
        }
        if (cnt > 1){
            for (int i=0; i < nums.size(); ++i){
                nums[i] = 0;
            }
            return nums;
        }
        else if(cnt == 1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]){
                    nums[i] = 0;
                }
                else {
                    nums[i] = sum;
                }
            }
            return nums;
        }
        else {
            for(int i=0; i<nums.size(); i++){
                if(nums[i]){
                    nums[i] = sum / nums[i];
                }
                else {
                    nums[i] = sum;
                }
            }
            return nums;
        }
        
    }
};