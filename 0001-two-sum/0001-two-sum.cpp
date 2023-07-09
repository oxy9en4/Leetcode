class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0; i < n; ++i){
            int complement = target - nums[i];
            if (umap.count(complement) == 1) return { umap[complement], i };
            umap[nums[i]] = i;
            
        }
        return { };
    }
};


/* lv 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if ((nums[i] + nums[j]) == target) return { i, j };
            }
        }
        return {};
    }
};
*/