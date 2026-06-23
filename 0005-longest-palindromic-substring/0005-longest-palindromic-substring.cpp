class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res;
        for (int i = 0; i < n; i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);
            if (len > res.size()) {
                res = s.substr(i - (len - 1) / 2, len);
            }
        }
        return res;
    }
    
    int expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};