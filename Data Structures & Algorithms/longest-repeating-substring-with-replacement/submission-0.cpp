class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int n = s.length();
        int l = 0, r = 0, max_freq = 0, max_len = 0;

        while (r < n) {
            mp[s[r]]++;
            max_freq = max(max_freq, mp[s[r]]);

            if ((r - l + 1) - max_freq > k) {
                mp[s[l]]--;
                l++;
            }

            max_len = max(max_len, r - l + 1);
            r++;
        }
        return max_len;
    }
};