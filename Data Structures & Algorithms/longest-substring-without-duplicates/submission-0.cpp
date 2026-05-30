class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int len = 0;
        int i=0,r=0;
        
        while(r < s.length()){
            mp[s[r]]++;
            while(mp[s[r]] > 1){
                mp[s[i]]--;
                i++;
            }
            len=max(len,r-i+1);
            r++;
        }
        return len;
    }
};
