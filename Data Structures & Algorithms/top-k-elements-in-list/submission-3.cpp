#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    static bool comp(const pair<int,int> &a, const pair<int,int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        vector<pair<int,int>> freqVec;
        for (auto &p : mp) {
            freqVec.push_back(p); 
        }

        sort(freqVec.begin(), freqVec.end(), comp);

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqVec[i].first);
        }

        return ans;
    }
};
