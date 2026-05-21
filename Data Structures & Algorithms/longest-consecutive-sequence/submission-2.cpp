class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxlen = 0;

        for (int x : numSet) {
            if (numSet.find(x - 1) == numSet.end()) {
                int currentNum = x;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }

                maxlen = max(maxlen, currentStreak);
            }
        }

        return maxlen;
    }
};