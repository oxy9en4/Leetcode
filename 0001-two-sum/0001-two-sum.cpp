class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> uMap;
        int sub;

        // find while mapping with Hash ///////////////
        for (int i = 0; i < nums.size(); ++i)
        {
            sub = target - nums[i];
            if (uMap.count(sub) && uMap[sub] != i)
                return {i, uMap[sub]};
            uMap[nums[i]] = i;
        }
        return {};
        
        
        // Hash ///////////////////////////
        //unordered_map<int, int> uMap;
        for (int i = 0; i < nums.size(); i++)
        {
            uMap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            sub = target - nums[i];
            if (uMap.count(sub) && uMap[sub] != i)
            {
                return {i, uMap[sub]};
            }
        }
        return {};
        
        //////////////////////////////////////
        // O(n^2) by brute force
        for (int i=0; i<nums.size(); i++)
        {
            int sub = target - nums[i];
            for (int j= i+1; j < nums.size(); j++)
            {
                if (nums[j] == sub)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
