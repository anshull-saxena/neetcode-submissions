class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int> cnt;
        for(int x : nums) cnt[x] = 1;

        set<vector<int>> s;
        vector<vector<int>> out;

        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = i+1; j < nums.size(); j++) {
                int target = -(nums[i] + nums[j]);
             int tIdx = find(nums.begin(),nums.end(),target) - nums.begin();
                if(cnt[target] && tIdx!=i && tIdx!=j && i!=j ) {
                    vector<int> temp = {nums[i], nums[j], target};
                    sort(temp.begin(), temp.end());
                    if(s.find(temp) == s.end()) {
                        out.push_back(temp);
                        s.insert(temp);
                    }
                }
            }
        }
        return out;  
    }
};
