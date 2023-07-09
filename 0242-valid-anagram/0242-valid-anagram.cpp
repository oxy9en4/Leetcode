class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for (auto i : s){
            count[i - 'a']++;
        }
        for (auto i : t){
            count[i - 'a']--;
        }
        for (auto i : count){
            if (i != 0) return false;
        }
        return true;
    }
};
*/

/*
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
*/