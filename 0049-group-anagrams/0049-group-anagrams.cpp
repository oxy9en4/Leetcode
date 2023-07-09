class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto i : strs){
            string tmp = i;
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(i);
        }
        vector<vector<string>> rtn;
        for(auto i : mp){
            rtn.push_back(i.second);
        }
        return rtn;
    }
};