class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, res = 0;
        unordered_map<char, int> mp;
        for (int right = 0; right < s.size(); right++) {
            if (mp.find(s[right]) != mp.end()) {
                left = max(left, mp[s[right]] + 1);
            }
            mp[s[right]] = right;
            res = max(res, right - left + 1);
        }
        return res;
    }
};