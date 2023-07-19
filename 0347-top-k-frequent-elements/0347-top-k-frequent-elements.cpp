class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> vp;
        unordered_map <int, int> umap;
        vector<int> ans;
        for (auto a : nums){
            umap[a]++;
        }
        for (auto a : umap){
            vp.push_back({a.second, a.first});
        }
        sort(vp.rbegin(), vp.rend());
        
        for (int i = 0; i < k; i++){
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};