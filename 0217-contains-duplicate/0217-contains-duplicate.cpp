class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int k=0, l = 0; // make range of array
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[k] || nums[i]==nums[l]) return true;
            else if(nums[i]<nums[k] && nums[i] > nums[l]){  // check if the value is out of range
                for(int j=0;j<i;j++){
                    if(nums[j]==nums[i])return true;
                }
            }
            else{
                if ( nums[i]>nums[k]){k=i;}
                else if ( nums[i]<nums[l]) {l=i;}
            }
        }
        return false; 
    }
};
