class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int res = 0;
        int start = 0;
        while (start < s.size() && s[start] == ' ') start++;
        if (start < s.size() && (s[start] == '-' || s[start] == '+')) {
            if (s[start] == '-') sign = -1;
            start++;
        }
        while (start < s.size() && s[start] >= '0' && s[start] <= '9') {
            int val = s[start] - '0';
            if (res > (INT_MAX - val) / 10) return sign == 1 ? INT_MAX : INT_MIN;
            res = res * 10 + val;
            start++;
        }
        return sign * res;
    }
};