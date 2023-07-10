class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> vp;
        unordered_map<int, int> uMap;
        vector<int> ans;
        
        for (auto a: nums){
            uMap[a]++;
        }
        for(auto a: uMap){
            vp.push_back({a.second, a.first});
        }
        sort(vp.rbegin(), vp.rend());
        
        for (int i=0; i<k; ++i){
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};