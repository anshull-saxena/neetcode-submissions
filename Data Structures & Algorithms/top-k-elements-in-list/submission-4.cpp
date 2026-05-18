#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        for (auto &p : freq) {
            int num = p.first;
            int f = p.second;
            buckets[f].push_back(num);
        }

        vector<int> ans;
        for (int f = n; f >= 1 && ans.size() < k; f--) {
            for (int num : buckets[f]) {
                ans.push_back(num);
                if (ans.size() == k) break;
            }
        }

        return ans;
    }
};
