class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 

        unordered_map<int,int> mp;
        for(int &x : nums){
            mp[x]++;
        }

        int maxlen = 0;
        for(int &x : nums){
            if (mp.find(x - 1) == mp.end()) {
                int mx = 1;
                int tmp = x;
                
                while(mp.find(tmp + 1) != mp.end()){
                    mx++;
                    tmp++;
                }
                
                maxlen = max(maxlen, mx);
            }
        }

        return maxlen;
    }
};