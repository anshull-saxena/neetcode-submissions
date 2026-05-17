class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> cnt;
        for(char c: s) cnt[c]++;

if(s.length() !=t.length()) return false;
        for(char c:t){
            cnt[c]--;
            if(cnt[c]<0) return false;
        }

        return true;
    }
};
