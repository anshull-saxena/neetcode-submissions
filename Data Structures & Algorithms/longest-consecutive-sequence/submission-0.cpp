class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int x : nums){ cnt[x]++;}

        vector<pair<int,int>> out(cnt.begin(),cnt.end());
        sort(out.begin(),out.end());

        int counter = 1,maxL = 0;
         if (out.empty()) return 0;

        for (int i = 1; i < out.size(); ++i) {
            if (out[i].first == out[i-1].first + 1) {
                counter++;
            } else {
                maxL = max(maxL, counter);
                counter = 1;
            }
        }

        maxL = max(maxL,counter);
        return maxL;
        
    }
};
