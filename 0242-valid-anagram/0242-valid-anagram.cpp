class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (auto i : s){
            ++count[i];
        }
        for (auto i : t){
            --count[i];
        }
        for (auto i : count){
            if (i.second != 0) return false;
        }
        return true;
    }
};